const path = require('path');
var webpack = require("webpack");
module.exports = {
  mode: 'development',
  entry: './src/main/node/entry.mjs',
  output: {
    path: path.resolve(__dirname, 'dist'),
    filename: 'loader-bundle.mjs',
  },
  resolve: {
        modules: ['node_modules'],
	fallback: {
	    "fs": false,
	    "tls": false,
	    "net": false,
	    "path": false,
	    "zlib": false,
	    "http": false,
	    "https": false,
	    "stream": false,
	    "crypto": false
	}
  },
  module: {
    rules: [
      {
        test: /\.js$/,
        use: "raw-loader",
	exclude: /node_modules/,
      },
      {
        test: /\.mjs$/,
        use: "raw-loader",
	exclude: /node_modules/,
      },
      {
        test: /\.js$/,
        use: "raw-loader",
	include: /node_modules/,
      },
      {
        test: /\.js$/,
        use: "raw-loader",
	include: /src\/main\/node/,
      },
      {
        test: /\.mjs$/,
        use: "raw-loader",
	include: /src\/main\/node/,
      },
    ],
  },
  target: 'async-node',
  stats : { errorDetails: true },
};
