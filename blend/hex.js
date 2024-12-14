"use strict";
var fs = require('fs');
var path = require('path');

function getRandomColor() {
    return new SFColor(Math.random(), Math.random(), Math.random());
}

function readNestedFileSystem(dirPath, ext) {
  var files = fs.readdirSync(dirPath);
  var result = [];

  files.forEach(file => {
    var filePath = path.join(dirPath, file);
    var stat = fs.statSync(filePath);

    if (stat.isDirectory()) {
      result.push(...readNestedFileSystem(filePath, ext));
    } else {
      var fileExt = path.extname(file);
      if (fileExt.toLowerCase() === ext) {
      	result.push(filePath);
      }
    }
  });

  return result;
}

function generateShapes(targetDirectory, targetExtension) {
    var shapeContainer = Browser.currentScene.getNamedNode('shapeContainer');
    var files = readNestedFileSystem(targetDirectory, targetExtension);

    for (var i = 0; i < files.length; i++) {
    // for (var i = 0; i < 10; i++) {
	var file = files[i].replaceAll('\\','/');
	var url = file.replace(/^.*\//, "").replace(/[?].*$/, "").replace(targetExtension, ".png");
	url = "images/"+url;

	var shape = Browser.currentScene.createNode('Shape');

	var geometry = Browser.currentScene.createNode('IndexedFaceSet');
	geometry.solid = false;
	geometry.coordIndex = new MFInt32(0, 1, 2, 3, 4, 5, -1);
	geometry.creaseAngle = 3.14;

	var coordinate = Browser.currentScene.createNode('Coordinate');
	coordinate.point = new MFFloat(-2, 0, -0.01, -1, 1.732, -0.01, 1, 1.732, -0.01, 2, 0, -0.01, 1, -1.732, -0.01, -1, -1.732, -0.01);

	geometry.coord = coordinate;
	var appearance = Browser.currentScene.createNode('Appearance');
	var material = Browser.currentScene.createNode('Material');
	material.diffuseColor = getRandomColor();
	appearance.material = material;
	shape.geometry = geometry;
	shape.appearance = appearance;

	var rectshape = Browser.currentScene.createNode('Shape');
	var rectgeometry = Browser.currentScene.createNode('Rectangle2D');
	rectgeometry.size = new SFVec2f(2.5, 2.5);
	var rectappearance = Browser.currentScene.createNode('Appearance');
	var rectmaterial = Browser.currentScene.createNode('Material');
	rectmaterial.diffuseColor = getRandomColor();
	rectappearance.material = rectmaterial;
	rectshape.geometry = rectgeometry;
	rectshape.appearance = rectappearance;

	/*
	var inline = Browser.currentScene.createNode('Inline');
	inline.global = true;
	inline.url = [file];
	inline.bboxSize = new SFVec3f(2, 2, 2);
	*/

	var transform = Browser.currentScene.createNode('Transform');
	transform.translation.x = i % 13 - 5;
	transform.translation.y = i / 13 - 5;
	if (transform.translation.x % 2 == 0) {
		transform.translation.y -= 0.43;
	}
	transform.translation.z = 0;
	transform.scale.x = 0.28;
	transform.scale.y = 0.28;
	transform.scale.z = 0.28;
	// transform.rotation = new SFRotation(1, 0, 0, Math.PI / 2);
	/*
	transform.translation.x = Math.random() * 20 - 10;
	transform.translation.y = Math.random() * 20 - 10;
	transform.translation.z = Math.random() * 20 - 10;
	*/
	var anchor = Browser.currentScene.createNode('Anchor');
	// console.log(file);
	anchor.url = [file];
	anchor.children.push(shape);

	var imageTexture = Browser.currentScene.createNode('ImageTexture');
	// console.log(url);
	imageTexture.url = [url];
	rectappearance.texture = imageTexture;
	anchor.children.push(rectshape);

	// anchor.children.push(inline);

	transform.children.push(anchor);

	shapeContainer.children.push(transform);
	var xml = Browser.currentScene.toXMLString();
	console.log(xml);
	fs.writeFileSync("ContactsApp.x3d", xml);
    }
}
function initialize() {
    var targetDirectory = '../glTF-Sample-Models/2.0/';
    var targetExtension = '.gltf';
    generateShapes(targetDirectory, targetExtension);
}
