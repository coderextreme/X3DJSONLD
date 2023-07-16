// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('3.3'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('browser.x3d')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('John Carlson')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('manual')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://coderextreme.net/X3DJSONLD/browser.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('a script test with embedded \\n between single quotes, a double backslash \\\\\\\\ a backslash \\\\ and a closing quote \"'))]),
      Scene_ : 
        Scene(
          children_ : [
            Script(
              DEF_ : SFString('Browser'),
              ,
ecmascript:eval (0
                , function initialize() {
		    Browser.print('DUDES\n'+'"DUDETTES');
                })),

            Script(
              DEF_ : SFString('Clouds'),
              ,
ecmascript:eval (0


, function cumulustranslation() // These values designate the boundary location of the cloud
{
var xxx = ' '+' '+
'	Transform		\n'+
'    ' + '               	\n';

}))]));
void main() { exit(0); }
