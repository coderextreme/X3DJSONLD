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
  FieldVal51: TSFInt32;
  FieldVal52: TX3DEvent;
  FieldVal53: TX3DEvent;
  FieldVal54: TX3DEvent;
  FieldVal55: TX3DEvent;
  FieldVal56: TX3DEvent;
  FieldVal57: TX3DEvent;
  FieldVal58: TSFBool;
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
  Transform91: TTransformNode;
  Transform93: TTransformNode;
  Shape96: TShapeNode;
  Text97: TTextNode;
  Transform100: TTransformNode;
  Transform102: TTransformNode;
  Anchor103: TAnchorNode;
  Shape105: TShapeNode;
  Text106: TTextNode;
  Transform109: TTransformNode;

procedure InitObliqueStrategiesPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'ObliqueStrategies.x3d';
X3D0.Meta['description'] := 'Text scripting and animation example using Oblique Strategies card set by Brian Eno.';
X3D0.Meta['creator'] := 'Don Brutzman, John Kelly, Ben Cheng';
X3D0.Meta['created'] := '3 November 2013';
X3D0.Meta['modified'] := '10 November 2019';
X3D0.Meta['reference'] := 'oblique.html';
X3D0.Meta['reference'] := 'ObliqueStrategies.txt';
X3D0.Meta['reference'] := 'ObliqueStrategiesScript.js';
X3D0.Meta['reference'] := 'http://music.hyperreal.org/artists/brian_eno/oblique/oblique.html';
X3D0.Meta['reference'] := 'http://www.eno-web.co.uk/obliques.html';
X3D0.Meta['reference'] := 'http://gothpunk.com/haiku-intro.html';
X3D0.Meta['reference'] := 'http://www.rtqe.net/ObliqueStrategies/OSintro.html';
X3D0.Meta['reference'] := 'https://en.wikipedia.org/wiki/Oblique_Strategies';
X3D0.Meta['subject'] := 'Brian Eno, Oblique Strategies';
X3D0.Meta['Image'] := 'images/ObliqueStrategiesEntryScreen.png';
X3D0.Meta['Sound'] := 'http://translate.google.com/translate_tts?tl=en&q=hello%20X3D';
X3D0.Meta['Sound'] := 'translate_tts_HelloX3D.mp3';
X3D0.Meta['Sound'] := 'translate_tts_HelloX3D.wav';
X3D0.Meta['TODO'] := 'multiliingual translation parameter';
X3D0.Meta['reference'] := 'http://stackoverflow.com/questions/9163988/download-mp3-from-google-translate-text-to-speech';
X3D0.Meta['reference'] := 'http://www.greenbot.com/article/2105862/how-to-get-started-with-google-text-to-speech.html';
X3D0.Meta['warning'] := 'under development, scene Sound/AudioClip triggering (or retrieved file format) not working';
X3D0.Meta['warning'] := 'TODO resolve potential error in Script node TextScript: parse problem line 15 " var strategy = [];';
X3D0.Meta['reference'] := 'https://gist.github.com/alotaiba/1728771';
X3D0.Meta['reference'] := 'https://stackoverflow.com/questions/35002003/how-to-use-google-translate-tts-with-the-new-v2-api';
X3D0.Meta['Sound'] := 'https://translate.google.com/translate_tts?ie=UTF-8&client=tw-ob&tl=en&q=Hello+X3D4';
X3D0.Meta['Sound'] := 'translate_tts_HelloX3D4.mp3';
X3D0.Meta['reference'] := 'https://cloud.google.com/translate/docs/basic/translating-text';
X3D0.Meta['identifier'] := 'https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategies.x3d';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := '../license.html';
Group33 := TGroupNode.Create;
WorldInfo34 := TWorldInfoNode.Create;
WorldInfo34.Title := 'ObliqueStrategies.x3d';
Group33.FdChildren.Add(WorldInfo34);
NavigationInfo35 := TNavigationInfoNode.Create;
end;

procedure InitObliqueStrategiesPart1;
begin
NavigationInfo35.SetType(['NONE']);
Group33.FdChildren.Add(NavigationInfo35);
Background36 := TBackgroundNode.Create;
Background36.SetSkyColor([Vector3(0.419608, 0.427451, 1)]);
Group33.FdChildren.Add(Background36);
Transform37 := TTransformNode.Create;
Transform37.Scale := Vector3(0.4, 0.4, 0.4);
Transform37.Translation := Vector3(0, 1, 0);
TouchSensor38 := TTouchSensorNode.Create;
TouchSensor38.X3DName := 'RandomTextClickedSensor';
TouchSensor38.Description := 'Select to see a new strategy';
Transform37.FdChildren.Add(TouchSensor38);
Shape39 := TShapeNode.Create;
Text40 := TTextNode.Create;
Text40.SetText(['Oblique Strategies', '(Over One Hundred Worthwhile Dilemmas)', 'by Brian Eno and Peter Schmidt']);
FontStyle41 := TFontStyleNode.Create;
FontStyle41.X3DName := 'MessageFont';
FontStyle41.Family := ffSans;
FontStyle41.Justify := fjMiddle;
FontStyle41.JustifyMinor := fjMiddle;
FontStyle41.Style := fsBold;
Text40.FontStyle := FontStyle41;
Shape39.Geometry := Text40;
Appearance42 := TAppearanceNode.Create;
Material43 := TMaterialNode.Create;
Material43.DiffuseColor := Vector3(1, 1, 1);
Appearance42.Material := Material43;
Shape39.Appearance := Appearance42;
Transform37.FdChildren.Add(Shape39);
Transform44 := TTransformNode.Create;
Transform44.Scale := Vector3(10, 3, 1);
Shape45 := TShapeNode.Create;
Shape45.X3DName := 'HeadlineClickSurface';
IndexedFaceSet46 := TIndexedFaceSetNode.Create;
IndexedFaceSet46.SetCoordIndex([0, 1, 2, 3, -1]);
IndexedFaceSet46.Solid := False;
Coordinate47 := TCoordinateNode.Create;
Coordinate47.SetPoint([Vector3(1, 1, 0), Vector3(1, -1, 0), Vector3(-1, -1, 0), Vector3(-1, 1, 0)]);
IndexedFaceSet46.Coord := Coordinate47;
Shape45.Geometry := IndexedFaceSet46;
end;

procedure InitObliqueStrategiesPart2;
begin
Appearance48 := TAppearanceNode.Create;
Material49 := TMaterialNode.Create;
Material49.AmbientIntensity := 0.245763;
Material49.DiffuseColor := Vector3(0.34773, 0.090909, 0.005289);
Material49.Shininess := 0.07;
Material49.SpecularColor := Vector3(0.336735, 0.051091, 0.051091);
Material49.Transparency := 0.8;
Appearance48.Material := Material49;
Shape45.Appearance := Appearance48;
Transform44.FdChildren.Add(Shape45);
Transform37.FdChildren.Add(Transform44);
Group33.FdChildren.Add(Transform37);
Script50 := TScriptNode.Create;
Script50.X3DName := 'TextScript';
Script50.SetUrl(['ObliqueStrategiesScript.js', 'https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategiesScript.js']);
{ initialize() method includes unit test to printAllStrategies() to console }
{ TODO insert field definitions here (index string_changed previous next random) and then animate! }
FieldVal51 := TSFInt32.Create(Script50, False, 'index', 0);
Script50.AddCustomFieldOrEvent(FieldVal51);
FieldVal52 := TMFString.CreateEvent(Script50, 'string_changed', False);
Script50.AddCustomFieldOrEvent(FieldVal52);
FieldVal53 := TMFString.CreateEvent(Script50, 'textToSpeechUrl', False);
Script50.AddCustomFieldOrEvent(FieldVal53);
FieldVal54 := TSFTime.CreateEvent(Script50, 'newCardTime', False);
Script50.AddCustomFieldOrEvent(FieldVal54);
FieldVal55 := TSFBool.CreateEvent(Script50, 'selectPreviousCard', True);
Script50.AddCustomFieldOrEvent(FieldVal55);
FieldVal56 := TSFBool.CreateEvent(Script50, 'selectNextCard', True);
Script50.AddCustomFieldOrEvent(FieldVal56);
FieldVal57 := TSFBool.CreateEvent(Script50, 'selectRandomCard', True);
Script50.AddCustomFieldOrEvent(FieldVal57);
FieldVal58 := TSFBool.Create(Script50, False, 'traceEnabled', True);
Script50.AddCustomFieldOrEvent(FieldVal58);
Group33.FdChildren.Add(Script50);
Transform59 := TTransformNode.Create;
Transform59.X3DName := 'CardTransform';
Transform59.Scale := Vector3(0.4, 0.4, 0.4);
Transform59.Translation := Vector3(0, -1.5, 0);
Shape60 := TShapeNode.Create;
Text61 := TTextNode.Create;
end;

procedure InitObliqueStrategiesPart3;
begin
Text61.X3DName := 'CardText';
FontStyle62 := TFontStyleNode.Create;
FontStyle62.Family := ffSans;
FontStyle62.Justify := fjMiddle;
FontStyle62.JustifyMinor := fjMiddle;
FontStyle62.Style := fsBold;
Text61.FontStyle := FontStyle62;
Shape60.Geometry := Text61;
Appearance63 := TAppearanceNode.Create;
Material64 := TMaterialNode.Create;
Material64.DiffuseColor := Vector3(1, 1, 1);
Appearance63.Material := Material64;
Shape60.Appearance := Appearance63;
Transform59.FdChildren.Add(Shape60);
{ ROUTE TextScript.string_changed TO CardText.string }
Transform59.AddRoute(FieldVal52, Text61.string);
Sound66 := TSoundNode.Create;
Sound66.X3DName := 'CardSoundSpatialization';
Sound66.MaxBack := 100;
Sound66.MaxFront := 100;
Sound66.MinBack := 20;
Sound66.MinFront := 20;
{ Make sure the sound source AudioClip is audible at the user location }
{ Not all X3D players seem to use the .mp3 }
{ &#38; is ampersand character, avoids escaping problems and inconsistencies in browsers and X3D players }
{ %20 is space character used in uri/url encoding }
AudioClip67 := TAudioClipNode.Create;
AudioClip67.X3DName := 'TextToSpeechAudioClip';
AudioClip67.Description := 'sends strategy text google translate';
AudioClip67.SetUrl(['http://translate.google.com/translate_tts?tl=en&amp;q=Feed%20the%20recording%20back%20out%20of%20the%20medium', 'translate_tts_mp3FileFormatNotSupported.wav', 'https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/translate_tts_mp3FileFormatNotSupported.wav']);
Sound66.Source := AudioClip67;
Transform59.FdChildren.Add(Sound66);
{ ROUTE TextScript.textToSpeechUrl TO TextToSpeechAudioClip.url }
Transform59.AddRoute(FieldVal53, AudioClip67.url);
{ ROUTE TextScript.newCardTime TO TextToSpeechAudioClip.startTime }
Transform59.AddRoute(FieldVal54, AudioClip67.FdStartTime.EventIn);
Group33.FdChildren.Add(Transform59);
Transform70 := TTransformNode.Create;
Transform70.Scale := Vector3(0.4, 0.4, 0.4);
Transform70.Translation := Vector3(-3.2, 2.5, 0);
end;

procedure InitObliqueStrategiesPart4;
begin
TouchSensor71 := TTouchSensorNode.Create;
TouchSensor71.X3DName := 'PreviousTextClickedSensor';
TouchSensor71.Description := 'Select to see previous strategy';
Transform70.FdChildren.Add(TouchSensor71);
{ ROUTE PreviousTextClickedSensor.isActive TO TextScript.selectPreviousCard }
Transform70.AddRoute(TouchSensor71.EventIsActive, FieldVal55);
Shape73 := TShapeNode.Create;
Text74 := TTextNode.Create;
Text74.SetText(['previous']);
Text74.FontStyle := FontStyle41;
Shape73.Geometry := Text74;
Appearance76 := TAppearanceNode.Create;
Appearance76.X3DName := 'InterfaceAppearance';
Material77 := TMaterialNode.Create;
Material77.DiffuseColor := Vector3(1, 0, 0.6);
Appearance76.Material := Material77;
Shape73.Appearance := Appearance76;
Transform70.FdChildren.Add(Shape73);
Transform78 := TTransformNode.Create;
Transform78.Scale := Vector3(2, 0.6, 1);
Shape79 := TShapeNode.Create;
Shape79.X3DName := 'TransparentClickSurface';
{ support Selectable Text with a scalable IFS }
IndexedFaceSet80 := TIndexedFaceSetNode.Create;
IndexedFaceSet80.SetCoordIndex([0, 1, 2, 3, -1]);
IndexedFaceSet80.Solid := False;
Coordinate81 := TCoordinateNode.Create;
Coordinate81.SetPoint([Vector3(1, 1, 0), Vector3(1, -1, 0), Vector3(-1, -1, 0), Vector3(-1, 1, 0)]);
IndexedFaceSet80.Coord := Coordinate81;
Shape79.Geometry := IndexedFaceSet80;
Appearance82 := TAppearanceNode.Create;
Material83 := TMaterialNode.Create;
Material83.Transparency := 1;
Appearance82.Material := Material83;
Shape79.Appearance := Appearance82;
Transform78.FdChildren.Add(Shape79);
Transform70.FdChildren.Add(Transform78);
Group33.FdChildren.Add(Transform70);
Transform84 := TTransformNode.Create;
Transform84.Scale := Vector3(0.4, 0.4, 0.4);
end;

procedure InitObliqueStrategiesPart5;
begin
Transform84.Translation := Vector3(3.5, 2.5, 0);
TouchSensor85 := TTouchSensorNode.Create;
TouchSensor85.X3DName := 'NextTextClickedSensor';
TouchSensor85.Description := 'Select to see next strategy';
Transform84.FdChildren.Add(TouchSensor85);
{ ROUTE NextTextClickedSensor.isActive TO TextScript.selectNextCard }
Transform84.AddRoute(TouchSensor85.EventIsActive, FieldVal56);
Shape87 := TShapeNode.Create;
Text88 := TTextNode.Create;
Text88.SetText(['next']);
Text88.FontStyle := FontStyle41;
Shape87.Geometry := Text88;
Shape87.Appearance := Appearance76;
Transform84.FdChildren.Add(Shape87);
Transform91 := TTransformNode.Create;
Transform91.Scale := Vector3(1.2, 0.6, 1);
Transform91.FdChildren.Add(Shape79);
Transform84.FdChildren.Add(Transform91);
Group33.FdChildren.Add(Transform84);
Transform93 := TTransformNode.Create;
Transform93.Scale := Vector3(0.4, 0.4, 0.4);
Transform93.Translation := Vector3(-3.3, -0.5, 0);
Transform93.FdChildren.Add(TouchSensor38);
{ ROUTE RandomTextClickedSensor.isActive TO TextScript.selectRandomCard }
Transform93.AddRoute(TouchSensor38.EventIsActive, FieldVal57);
Shape96 := TShapeNode.Create;
Text97 := TTextNode.Create;
Text97.SetText(['random']);
Text97.FontStyle := FontStyle41;
Shape96.Geometry := Text97;
Shape96.Appearance := Appearance76;
Transform93.FdChildren.Add(Shape96);
Transform100 := TTransformNode.Create;
Transform100.Scale := Vector3(1.8, 0.6, 1);
Transform100.FdChildren.Add(Shape79);
Transform93.FdChildren.Add(Transform100);
Group33.FdChildren.Add(Transform93);
Transform102 := TTransformNode.Create;
Transform102.Scale := Vector3(0.4, 0.4, 0.4);
Transform102.Translation := Vector3(3.3, -0.5, 0);
end;

procedure InitObliqueStrategiesPart6;
begin
Anchor103 := TAnchorNode.Create;
Anchor103.X3DName := 'TextToSpeechAnchor';
Anchor103.Description := 'text to speech in browser';
Anchor103.SetParameter(['target=_blank']);
Anchor103.SetUrl(['http://translate.google.com/translate_tts?tl=en&amp;q=Overtly%20resist%20change']);
{ ROUTE TextScript.textToSpeechUrl TO TextToSpeechAnchor.url }
Anchor103.AddRoute(FieldVal53, Anchor103.url);
Shape105 := TShapeNode.Create;
Text106 := TTextNode.Create;
Text106.SetText(['speech']);
Text106.FontStyle := FontStyle41;
Shape105.Geometry := Text106;
Shape105.Appearance := Appearance76;
Anchor103.FdChildren.Add(Shape105);
Transform109 := TTransformNode.Create;
Transform109.Scale := Vector3(1.8, 0.6, 1);
Transform109.FdChildren.Add(Shape79);
Anchor103.FdChildren.Add(Transform109);
Transform102.FdChildren.Add(Anchor103);
Group33.FdChildren.Add(Transform102);
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
  Result := X3D0;
end;

begin
end.
