#!/usr/bin/node

const request = require("request");
const urlMovie = "https://swapi-api.hbtn.io/api/films/" + process.argv[2];

request(urlMovie, function (error, response, body) {
  if (error == null) {
    const characters = JSON.parse(body).characters;

    if (characters && characters.length > 0) {
      myRequest(0, characters[0], characters, characters.length);
    }
  } else {
    console.log(error);
  }
});

function myRequest(idx, url, characters, limit) {
  if (idx === limit) {
    return;
  }
  request(url, function (error, response, body) {
    if (!error) {
      console.log(JSON.parse(body).name);

      myRequest(++idx, characters[idx], characters, limit);
    } else {
      console.error(error);
    }
  });
}
