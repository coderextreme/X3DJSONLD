unit ObliqueStrategies;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateObliqueStrategies: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group33: TGroupNode;
WorldInfo34: TWorldInfoNode;
NavigationInfo35: TNavigationInfoNode;
Background36: TBackgroundNode;
Transform37: TTransformNode;
TouchSensor38: TTouchSensorNode;
Shape39: TShapeNode;
Text40: TTextNode;
FontStyle41: TFontStyleNode;
Appearance42: TAppearanceNode;
Material43: TMaterialNode;
Transform44: TTransformNode;
Shape45: TShapeNode;
IndexedFaceSet46: TIndexedFaceSetNode;
Coordinate47: TCoordinateNode;
Appearance48: TAppearanceNode;
Material49: TMaterialNode;
Script50: TScriptNode;
SFInt3251: TSFInt32;
MFString52: TMFString;
MFString53: TMFString;
SFTime54: TSFTime;
SFBool55: TSFBool;
SFBool56: TSFBool;
SFBool57: TSFBool;
SFBool58: TSFBool;
Transform59: TTransformNode;
Shape60: TShapeNode;
Text61: TTextNode;
FontStyle62: TFontStyleNode;
Appearance63: TAppearanceNode;
Material64: TMaterialNode;
Sound66: TSoundNode;
AudioClip67: TAudioClipNode;
Transform70: TTransformNode;
TouchSensor71: TTouchSensorNode;
Shape73: TShapeNode;
Text74: TTextNode;
FontStyle75: TFontStyleNode;
Appearance76: TAppearanceNode;
Material77: TMaterialNode;
Transform78: TTransformNode;
Shape79: TShapeNode;
IndexedFaceSet80: TIndexedFaceSetNode;
Coordinate81: TCoordinateNode;
Appearance82: TAppearanceNode;
Material83: TMaterialNode;
Transform84: TTransformNode;
TouchSensor85: TTouchSensorNode;
Shape87: TShapeNode;
Text88: TTextNode;
FontStyle89: TFontStyleNode;
Appearance90: TAppearanceNode;
Transform91: TTransformNode;
Shape92: TShapeNode;
Transform93: TTransformNode;
TouchSensor94: TTouchSensorNode;
Shape96: TShapeNode;
Text97: TTextNode;
FontStyle98: TFontStyleNode;
Appearance99: TAppearanceNode;
Transform100: TTransformNode;
Shape101: TShapeNode;
Transform102: TTransformNode;
Anchor103: TAnchorNode;
Shape105: TShapeNode;
Text106: TTextNode;
FontStyle107: TFontStyleNode;
Appearance108: TAppearanceNode;
Transform109: TTransformNode;
Shape110: TShapeNode;

procedure InitObliqueStrategiesPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'ObliqueStrategies.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Text scripting and animation example using Oblique Strategies card set by Brian Eno.';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Don Brutzman, John Kelly, Ben Cheng';
{ METHOD .Meta }
X3D0.Meta['created'] := '3 November 2013';
{ METHOD .Meta }
X3D0.Meta['modified'] := '10 November 2019';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'oblique.html';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'ObliqueStrategies.txt';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'ObliqueStrategiesScript.js';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'http://music.hyperreal.org/artists/brian_eno/oblique/oblique.html';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'http://www.eno-web.co.uk/obliques.html';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'http://gothpunk.com/haiku-intro.html';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'http://www.rtqe.net/ObliqueStrategies/OSintro.html';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://en.wikipedia.org/wiki/Oblique_Strategies';
{ METHOD .Meta }
X3D0.Meta['subject'] := 'Brian Eno, Oblique Strategies';
{ METHOD .Meta }
X3D0.Meta['Image'] := 'images/ObliqueStrategiesEntryScreen.png';
{ METHOD .Meta }
X3D0.Meta['Sound'] := 'http://translate.google.com/translate_tts?tl=en&q=hello%20X3D';
{ METHOD .Meta }
X3D0.Meta['Sound'] := 'translate_tts_HelloX3D.mp3';
{ METHOD .Meta }
X3D0.Meta['Sound'] := 'translate_tts_HelloX3D.wav';
{ METHOD .Meta }
X3D0.Meta['TODO'] := 'multiliingual translation parameter';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'http://stackoverflow.com/questions/9163988/download-mp3-from-google-translate-text-to-speech';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'http://www.greenbot.com/article/2105862/how-to-get-started-with-google-text-to-speech.html';
{ METHOD .Meta }
X3D0.Meta['warning'] := 'under development, scene Sound/AudioClip triggering (or retrieved file format) not working';
{ METHOD .Meta }
X3D0.Meta['warning'] := 'TODO resolve potential error in Script node TextScript: parse problem line 15 \" var strategy = [];';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://gist.github.com/alotaiba/1728771';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://stackoverflow.com/questions/35002003/how-to-use-google-translate-tts-with-the-new-v2-api';
{ METHOD .Meta }
X3D0.Meta['Sound'] := 'https://translate.google.com/translate_tts?ie=UTF-8&client=tw-ob&tl=en&q=Hello+X3D4';
{ METHOD .Meta }
X3D0.Meta['Sound'] := 'translate_tts_HelloX3D4.mp3';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://cloud.google.com/translate/docs/basic/translating-text';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategies.x3d';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['license'] := '../license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group33 := TGroupNode.Create;;
WorldInfo34 := TWorldInfoNode.Create;;
WorldInfo34.Title := 'ObliqueStrategies.x3d';
end;

procedure InitObliqueStrategiesPart1;
begin

{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(WorldInfo34);
NavigationInfo35 := TNavigationInfoNode.Create;;
NavigationInfo35.SetType(['NONE']);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(NavigationInfo35);
Background36 := TBackgroundNode.Create;;
Background36.SetSkyColor([Vector3(0.419608,0.427451,1)]);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(Background36);
Transform37 := TTransformNode.Create;;
Transform37.Scale := Vector3(0.4,0.4,0.4);
Transform37.Translation := Vector3(0,1,0);
TouchSensor38 := TTouchSensorNode.Create;;
TouchSensor38.Description := 'Select to see a new strategy';
{ METHOD .FdChildren.Add }
Transform37.FdChildren.Add(TouchSensor38);
Shape39 := TShapeNode.Create;;
Text40 := TTextNode.Create;;
Text40.SetText(['Oblique Strategies','(Over One Hundred Worthwhile Dilemmas)','by Brian Eno and Peter Schmidt']);
FontStyle41 := TFontStyleNode.Create;;
FontStyle41.Family := ffSANS;
FontStyle41.Justify := fjMIDDLE;
FontStyle41.JustifyMinor := fjMIDDLE;
FontStyle41.Style := fsBOLD;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text40.FontStyle := FontStyle41;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape39.Geometry := Text40;
Appearance42 := TAppearanceNode.Create;;
Material43 := TMaterialNode.Create;;
Material43.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance42.Material := Material43;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape39.Appearance := Appearance42;
{ METHOD .FdChildren.Add }
Transform37.FdChildren.Add(Shape39);
Transform44 := TTransformNode.Create;;
end;

procedure InitObliqueStrategiesPart2;
begin

Transform44.Scale := Vector3(10,3,1);
Shape45 := TShapeNode.Create;;
IndexedFaceSet46 := TIndexedFaceSetNode.Create;;
IndexedFaceSet46.SetCoordIndex([0,1,2,3,-1]);
IndexedFaceSet46.Solid := False;
Coordinate47 := TCoordinateNode.Create;;
Coordinate47.SetPoint([Vector3(1,1,0),Vector3(1,-1,0),Vector3(-1,-1,0),Vector3(-1,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet46.Coord := Coordinate47;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape45.Geometry := IndexedFaceSet46;
Appearance48 := TAppearanceNode.Create;;
Material49 := TMaterialNode.Create;;
Material49.AmbientIntensity := 0.245763;
Material49.DiffuseColor := Vector3(0.34773,0.090909,0.005289);
Material49.Shininess := 0.07;
Material49.SpecularColor := Vector3(0.336735,0.051091,0.051091);
Material49.Transparency := 0.8;
{ METHOD .SetMaterial }
Appearance48.Material := Material49;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape45.Appearance := Appearance48;
{ METHOD .FdChildren.Add }
Transform44.FdChildren.Add(Shape45);
{ METHOD .FdChildren.Add }
Transform37.FdChildren.Add(Transform44);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(Transform37);
Script50 := TScriptNode.Create;;
Script50.SetUrl(['ObliqueStrategiesScript.js','https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategiesScript.js']);
{ initialize() method includes unit test to printAllStrategies() to console }
{ TODO insert field definitions here (index string_changed previous next random) and then animate! }
SFInt3251 := TSFInt32.CreateUndefined(Script50, false, 'index');
SFInt3251.Appinfo := 'index for active strategy card, -1 means no selection';
SFInt3251.Value := '0';
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFInt3251);
MFString52 := TMFString.CreateUndefined(Script50, false, 'string_changed');
MFString52.Appinfo := 'latest strategy card value';
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(MFString52);
MFString53 := TMFString.CreateUndefined(Script50, false, 'textToSpeechUrl');
MFString53.Appinfo := '\"url to invoke Google Translate\"';
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(MFString53);
SFTime54 := TSFTime.CreateUndefined(Script50, false, 'newCardTime');
end;

procedure InitObliqueStrategiesPart3;
begin

SFTime54.Appinfo := 'activate Sound node';
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFTime54);
SFBool55 := TSFBool.CreateUndefined(Script50, false, 'selectPreviousCard');
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFBool55);
SFBool56 := TSFBool.CreateUndefined(Script50, false, 'selectNextCard');
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFBool56);
SFBool57 := TSFBool.CreateUndefined(Script50, false, 'selectRandomCard');
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFBool57);
SFBool58 := TSFBool.CreateUndefined(Script50, false, 'traceEnabled');
SFBool58.Appinfo := 'controls console tracing';
SFBool58.Value := 'true';
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFBool58);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(Script50);
Transform59 := TTransformNode.Create;;
Transform59.Scale := Vector3(0.4,0.4,0.4);
Transform59.Translation := Vector3(0,-1.5,0);
Shape60 := TShapeNode.Create;;
Text61 := TTextNode.Create;;
FontStyle62 := TFontStyleNode.Create;;
FontStyle62.Family := ffSANS;
FontStyle62.Justify := fjMIDDLE;
FontStyle62.JustifyMinor := fjMIDDLE;
FontStyle62.Style := fsBOLD;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text61.FontStyle := FontStyle62;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape60.Geometry := Text61;
Appearance63 := TAppearanceNode.Create;;
Material64 := TMaterialNode.Create;;
Material64.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance63.Material := Material64;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape60.Appearance := Appearance63;
{ METHOD .FdChildren.Add }
Transform59.FdChildren.Add(Shape60);
{ Original "TextScript.EventString_changed TO CardText.string }
{ Sample TextScript.EventString_changed TO CardText.string}
Transform59.AddRoute(Script50.EventString_changed, Text61.string);
{ METHOD .AddX3DROUTE }
Sound66 := TSoundNode.Create;;
end;

procedure InitObliqueStrategiesPart4;
begin

Sound66.MaxBack := 100;
Sound66.MaxFront := 100;
Sound66.MinBack := 20;
Sound66.MinFront := 20;
{ Make sure the sound source AudioClip is audible at the user location }
{ Not all X3D players seem to use the .mp3 }
{ &#38; is ampersand character, avoids escaping problems and inconsistencies in browsers and X3D players }
{ %20 is space character used in uri/url encoding }
AudioClip67 := TAudioClipNode.Create;;
AudioClip67.Description := 'sends strategy text google translate';
AudioClip67.SetUrl(['http://translate.google.com/translate_tts?tl=en&amp;q=Feed%20the%20recording%20back%20out%20of%20the%20medium','translate_tts_mp3FileFormatNotSupported.wav','https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/translate_tts_mp3FileFormatNotSupported.wav']);
{ METHOD .Source }
{ METHOD.SET .Source }
Sound66.Source := AudioClip67;
{ METHOD .FdChildren.Add }
Transform59.FdChildren.Add(Sound66);
{ Original "TextScript.textToSpeechUrl TO TextToSpeechAudioClip.url }
{ Sample TextScript.textToSpeechUrl TO TextToSpeechAudioClip.url}
Transform59.AddRoute(TextScript.undefined, AudioClip67.url);
{ METHOD .AddX3DROUTE }
{ Original "TextScript.newCardTime TO TextToSpeechAudioClip.FdStartTime.EventIn }
{ Sample TextScript.newCardTime TO TextToSpeechAudioClip.FdStartTime.EventIn}
Transform59.AddRoute(TextScript.undefined, AudioClip67.FdStartTime.EventIn);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(Transform59);
Transform70 := TTransformNode.Create;;
Transform70.Scale := Vector3(0.4,0.4,0.4);
Transform70.Translation := Vector3(-3.2,2.5,0);
TouchSensor71 := TTouchSensorNode.Create;;
TouchSensor71.Description := 'Select to see previous strategy';
{ METHOD .FdChildren.Add }
Transform70.FdChildren.Add(TouchSensor71);
{ Original "PreviousTextClickedSensor.EventIsActive TO TextScript.selectPreviousCard }
{ Sample PreviousTextClickedSensor.EventIsActive TO TextScript.selectPreviousCard}
Transform70.AddRoute(TouchSensor71.EventIsActive, SFBool55);
{ METHOD .AddX3DROUTE }
Shape73 := TShapeNode.Create;;
Text74 := TTextNode.Create;;
Text74.SetText(['previous']);
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text74.FontStyle := FontStyle41;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape73.Geometry := Text74;
Appearance76 := TAppearanceNode.Create;;
Material77 := TMaterialNode.Create;;
Material77.DiffuseColor := Vector3(1,0,0.6);
{ METHOD .SetMaterial }
Appearance76.Material := Material77;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape73.Appearance := Appearance76;
{ METHOD .FdChildren.Add }
Transform70.FdChildren.Add(Shape73);
Transform78 := TTransformNode.Create;;
Transform78.Scale := Vector3(2,0.6,1);
end;

procedure InitObliqueStrategiesPart5;
begin

Shape79 := TShapeNode.Create;;
{ support Selectable Text with a scalable IFS }
IndexedFaceSet80 := TIndexedFaceSetNode.Create;;
IndexedFaceSet80.SetCoordIndex([0,1,2,3,-1]);
IndexedFaceSet80.Solid := False;
Coordinate81 := TCoordinateNode.Create;;
Coordinate81.SetPoint([Vector3(1,1,0),Vector3(1,-1,0),Vector3(-1,-1,0),Vector3(-1,1,0)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet80.Coord := Coordinate81;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape79.Geometry := IndexedFaceSet80;
Appearance82 := TAppearanceNode.Create;;
Material83 := TMaterialNode.Create;;
Material83.Transparency := 1;
{ METHOD .SetMaterial }
Appearance82.Material := Material83;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape79.Appearance := Appearance82;
{ METHOD .FdChildren.Add }
Transform78.FdChildren.Add(Shape79);
{ METHOD .FdChildren.Add }
Transform70.FdChildren.Add(Transform78);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(Transform70);
Transform84 := TTransformNode.Create;;
Transform84.Scale := Vector3(0.4,0.4,0.4);
Transform84.Translation := Vector3(3.5,2.5,0);
TouchSensor85 := TTouchSensorNode.Create;;
TouchSensor85.Description := 'Select to see next strategy';
{ METHOD .FdChildren.Add }
Transform84.FdChildren.Add(TouchSensor85);
{ Original "NextTextClickedSensor.EventIsActive TO TextScript.selectNextCard }
{ Sample NextTextClickedSensor.EventIsActive TO TextScript.selectNextCard}
Transform84.AddRoute(TouchSensor85.EventIsActive, SFBool56);
{ METHOD .AddX3DROUTE }
Shape87 := TShapeNode.Create;;
Text88 := TTextNode.Create;;
Text88.SetText(['next']);
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text88.FontStyle := FontStyle41;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape87.Geometry := Text88;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape87.Appearance := Appearance76;
{ METHOD .FdChildren.Add }
Transform84.FdChildren.Add(Shape87);
Transform91 := TTransformNode.Create;
end;

procedure InitObliqueStrategiesPart6;
begin
;
Transform91.Scale := Vector3(1.2,0.6,1);
{ METHOD .FdChildren.Add }
Transform91.FdChildren.Add(Shape79);
{ METHOD .FdChildren.Add }
Transform84.FdChildren.Add(Transform91);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(Transform84);
Transform93 := TTransformNode.Create;;
Transform93.Scale := Vector3(0.4,0.4,0.4);
Transform93.Translation := Vector3(-3.3,-0.5,0);
{ METHOD .FdChildren.Add }
Transform93.FdChildren.Add(TouchSensor38);
{ Original "RandomTextClickedSensor.EventIsActive TO TextScript.selectRandomCard }
{ Sample RandomTextClickedSensor.EventIsActive TO TextScript.selectRandomCard}
Transform93.AddRoute(TouchSensor38.EventIsActive, SFBool57);
{ METHOD .AddX3DROUTE }
Shape96 := TShapeNode.Create;;
Text97 := TTextNode.Create;;
Text97.SetText(['random']);
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text97.FontStyle := FontStyle41;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape96.Geometry := Text97;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape96.Appearance := Appearance76;
{ METHOD .FdChildren.Add }
Transform93.FdChildren.Add(Shape96);
Transform100 := TTransformNode.Create;;
Transform100.Scale := Vector3(1.8,0.6,1);
{ METHOD .FdChildren.Add }
Transform100.FdChildren.Add(Shape79);
{ METHOD .FdChildren.Add }
Transform93.FdChildren.Add(Transform100);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(Transform93);
Transform102 := TTransformNode.Create;;
Transform102.Scale := Vector3(0.4,0.4,0.4);
Transform102.Translation := Vector3(3.3,-0.5,0);
Anchor103 := TAnchorNode.Create;;
Anchor103.Description := 'text to speech in browser';
Anchor103.SetParameter(['target=_blank']);
Anchor103.SetUrl(['http://translate.google.com/translate_tts?tl=en&amp;q=Overtly%20resist%20change']);
{ Original "TextScript.textToSpeechUrl TO TextToSpeechAnchor.url }
{ Sample TextScript.textToSpeechUrl TO TextToSpeechAnchor.url}
Anchor103.AddRoute(TextScript.undefined, Anchor103.url);
{ METHOD .AddX3DROUTE }
Shape105 := TShapeNode.Create;;
Text106 := TTextNode.Create;;
end;

procedure InitObliqueStrategiesPart7;
begin

Text106.SetText(['speech']);
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text106.FontStyle := FontStyle41;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape105.Geometry := Text106;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape105.Appearance := Appearance76;
{ METHOD .FdChildren.Add }
Anchor103.FdChildren.Add(Shape105);
Transform109 := TTransformNode.Create;;
Transform109.Scale := Vector3(1.8,0.6,1);
{ METHOD .FdChildren.Add }
Transform109.FdChildren.Add(Shape79);
{ METHOD .FdChildren.Add }
Anchor103.FdChildren.Add(Transform109);
{ METHOD .FdChildren.Add }
Transform102.FdChildren.Add(Anchor103);
{ METHOD .FdChildren.Add }
Group33.FdChildren.Add(Transform102);
{ METHOD .AddGroup }
X3D0.AddChildren([Group33]);
end;

function CreateObliqueStrategies: TX3DRootNode;
begin
InitObliqueStrategiesPart0;
InitObliqueStrategiesPart1;
InitObliqueStrategiesPart2;
InitObliqueStrategiesPart3;
InitObliqueStrategiesPart4;
InitObliqueStrategiesPart5;
InitObliqueStrategiesPart6;
InitObliqueStrategiesPart7;
Result := X3D0;
end;

begin
end.
