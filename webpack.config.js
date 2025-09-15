import path from 'path';
import webpack from "webpack";
import { dirname } from 'path';
import { fileURLToPath } from 'url';
const __filename = fileURLToPath(import.meta.url);
const __dirname = dirname(__filename);

export default {
  mode: 'development',
  entry: './src/main/node/json2sai.js',
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
        use: "babel-loader",
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
        use: "babel-loader",
	include: /src\/main\/node/,
      },
    ],
  },
  stats : { errorDetails: true },
};
