unit CaliforniaCampuses;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function CreateCaliforniaCampuses: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group20: TGroupNode;
WorldInfo21: TWorldInfoNode;
Switch22: TSwitchNode;
Inline23: TInlineNode;
NavigationInfo24: TNavigationInfoNode;
Group25: TGroupNode;
GeoViewpoint26: TGeoViewpointNode;
GeoViewpoint27: TGeoViewpointNode;
GeoViewpoint28: TGeoViewpointNode;
GeoViewpoint29: TGeoViewpointNode;
GeoViewpoint30: TGeoViewpointNode;
GeoViewpoint31: TGeoViewpointNode;
GeoViewpoint32: TGeoViewpointNode;
GeoViewpoint33: TGeoViewpointNode;
GeoViewpoint34: TGeoViewpointNode;
GeoViewpoint35: TGeoViewpointNode;
GeoViewpoint36: TGeoViewpointNode;
GeoViewpoint37: TGeoViewpointNode;
GeoViewpoint38: TGeoViewpointNode;
GeoViewpoint39: TGeoViewpointNode;
GeoViewpoint40: TGeoViewpointNode;
GeoViewpoint41: TGeoViewpointNode;
GeoViewpoint42: TGeoViewpointNode;
GeoViewpoint43: TGeoViewpointNode;
GeoViewpoint44: TGeoViewpointNode;
GeoViewpoint45: TGeoViewpointNode;
GeoViewpoint46: TGeoViewpointNode;
GeoViewpoint47: TGeoViewpointNode;
GeoViewpoint48: TGeoViewpointNode;
GeoViewpoint49: TGeoViewpointNode;
GeoViewpoint50: TGeoViewpointNode;
GeoViewpoint51: TGeoViewpointNode;
GeoViewpoint52: TGeoViewpointNode;
GeoViewpoint53: TGeoViewpointNode;
GeoViewpoint54: TGeoViewpointNode;
GeoViewpoint55: TGeoViewpointNode;
GeoViewpoint56: TGeoViewpointNode;
GeoViewpoint57: TGeoViewpointNode;
GeoViewpoint58: TGeoViewpointNode;
GeoViewpoint59: TGeoViewpointNode;
GeoViewpoint60: TGeoViewpointNode;
X3DExternalPrototype61: TX3DExternalPrototype;
SFBool62: TSFBool;
SFBool63: TSFBool;
SFColor64: TSFColor;
SFVec3f65: TSFVec3f;
SFVec3f66: TSFVec3f;
X3DPrototype67: TX3DPrototypeNode;
SFBool68: TSFBool;
SFColor69: TSFColor;
SFVec3f70: TSFVec3f;
SFVec3f71: TSFVec3f;
X3DExternalPrototype72: TX3DExternalPrototype;
MFNode73: TMFNode;
SFVec3f74: TSFVec3f;
SFVec3f75: TSFVec3f;
SFRotation76: TSFRotation;
X3DExternalPrototype77: TX3DExternalPrototype;
MFNode78: TMFNode;
SFTime79: TSFTime;
SFBool80: TSFBool;
SFBool81: TSFBool;
SFBool82: TSFBool;
SFBool83: TSFBool;
MFString84: TMFString;
SFFloat85: TSFFloat;
SFColor86: TSFColor;
SFBool87: TSFBool;
X3DPrototype88: TX3DPrototypeNode;
SFTime89: TSFTime;
SFBool90: TSFBool;
MFString91: TMFString;
MFNode92: TMFNode;
GeoViewpoint93: TGeoViewpointNode;
GeoViewpoint94: TGeoViewpointNode;
GeoViewpoint95: TGeoViewpointNode;
GeoViewpoint96: TGeoViewpointNode;
GeoViewpoint97: TGeoViewpointNode;
GeoViewpoint98: TGeoViewpointNode;
GeoViewpoint99: TGeoViewpointNode;
GeoViewpoint100: TGeoViewpointNode;
GeoViewpoint101: TGeoViewpointNode;
GeoViewpoint102: TGeoViewpointNode;
GeoViewpoint103: TGeoViewpointNode;
GeoViewpoint104: TGeoViewpointNode;
GeoViewpoint105: TGeoViewpointNode;
GeoViewpoint106: TGeoViewpointNode;
GeoViewpoint107: TGeoViewpointNode;
GeoViewpoint108: TGeoViewpointNode;
GeoViewpoint109: TGeoViewpointNode;
GeoViewpoint110: TGeoViewpointNode;
GeoViewpoint111: TGeoViewpointNode;
GeoViewpoint112: TGeoViewpointNode;
GeoViewpoint113: TGeoViewpointNode;
GeoViewpoint114: TGeoViewpointNode;
GeoViewpoint115: TGeoViewpointNode;
GeoViewpoint116: TGeoViewpointNode;
GeoViewpoint117: TGeoViewpointNode;
GeoViewpoint118: TGeoViewpointNode;
GeoViewpoint119: TGeoViewpointNode;
GeoViewpoint120: TGeoViewpointNode;
GeoViewpoint121: TGeoViewpointNode;
GeoViewpoint122: TGeoViewpointNode;
GeoViewpoint123: TGeoViewpointNode;
GeoViewpoint124: TGeoViewpointNode;
GeoViewpoint125: TGeoViewpointNode;
GeoViewpoint126: TGeoViewpointNode;
GeoViewpoint127: TGeoViewpointNode;
Viewpoint128: TViewpointNode;
GeoLocation129: TGeoLocationNode;
Billboard130: TBillboardNode;
Shape131: TShapeNode;
Text132: TTextNode;
FontStyle133: TFontStyleNode;
Appearance134: TAppearanceNode;
Material135: TMaterialNode;
TouchSensor136: TTouchSensorNode;
BooleanToggle137: TBooleanToggleNode;
X3DExternalPrototype140: TX3DExternalPrototype;
SFBool141: TSFBool;
SFBool142: TSFBool;
SFBool143: TSFBool;
SFVec3f144: TSFVec3f;
SFRotation145: TSFRotation;
MFString146: TMFString;
X3DPrototype147: TX3DPrototypeNode;
SFBool148: TSFBool;

procedure InitCaliforniaCampusesPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Geospatial'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'CaliforniaCampuses.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'Viewpoints and tour of California campuses';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'Don Brutzman, Dale Tourtelotte, Mike Bailey, Don McGregor';
{ METHOD .Meta }
X3D0.Meta['created'] := '4 March 2010';
{ METHOD .Meta }
X3D0.Meta['modified'] := '20 October 2019';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'CaliforniaCampuses.kml';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'https://www.web3d.org/x3d-earth';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'http://x3d-earth.nps.edu';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'http://hamming.uc.nps.edu';
{ METHOD .Meta }
X3D0.Meta['subject'] := 'X3D Earth';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/Basic/Geospatial/CaliforniaCampuses.x3d';
{ METHOD .Meta }
X3D0.Meta['reference'] := 'http://mmog.ern.nps.edu/California/California.x3d';
{ METHOD .Meta }
X3D0.Meta['warning'] := 'under development';
{ METHOD .Meta }
X3D0.Meta['warning'] := 'mmog.ern.nps.edu restricted to internal access within NPS firewall only';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'KmlToX3dViewpoints.xslt';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
{ METHOD .Meta }
X3D0.Meta['license'] := 'https://savage.nps.edu/Savage/license.html';
{ METHOD .Meta }
{ METHOD .Head }
Group20 := TGroupNode.Create;
WorldInfo21 := TWorldInfoNode.Create;
WorldInfo21.Title := 'CaliforniaCampuses.x3d';
{ METHOD .FdChildren.Add }
Group20.FdChildren.Add(WorldInfo21);
Switch22 := TSwitchNode.Create;
Switch22.WhichChoice := 0;
{ Select globe of interest. Warning: may need to keep alternate globes commented out to prevent browser caching. }
Inline23 := TInlineNode.Create;
Inline23.SetUrl(['http://x3d-earth.nps.edu/osmdemo.x3d']);
{ METHOD .FdChildren.Add }
Switch22.FdChildren.Add(Inline23);
{ <Inline load='false' url='"http://mmog.ern.nps.edu/California/California.x3d"'/> }
{ <Inline load='false' url='"http://x3d-earth.nps.edu/7_levels_plus/tiles/0/globe.x3d"'/> }
{ <Inline load='false' url='"http://x3d-earth.nps.edu/globe/MBARI1MinuteBathy/world.x3d"'/> }
{ <Inline load='false' url='"http://x3d-earth.nps.edu/globe/SRTM30Plus/world.x3d"'/> }
{ METHOD .FdChildren.Add }
Group20.FdChildren.Add(Switch22);
NavigationInfo24 := TNavigationInfoNode.Create;
NavigationInfo24.SetTransitionType(['ANIMATE']);
{ METHOD .FdChildren.Add }
Group20.FdChildren.Add(NavigationInfo24);
Group25 := TGroupNode.Create;
GeoViewpoint26 := TGeoViewpointNode.Create;
GeoViewpoint26.Description := 'Naval Postgraduate School';
GeoViewpoint26.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint26.Position := Vector3Double(36.595599,-121.877148,250000);
end;

procedure InitCaliforniaCampusesPart1;
begin

{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(GeoViewpoint26);
GeoViewpoint27 := TGeoViewpointNode.Create;
GeoViewpoint27.Description := 'University of California Davis';
GeoViewpoint27.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint27.Position := Vector3Double(38.53650615157984,-121.7489628616831,250000);
{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(GeoViewpoint27);
GeoViewpoint28 := TGeoViewpointNode.Create;
GeoViewpoint28.Description := 'University of California Berkeley';
GeoViewpoint28.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint28.Position := Vector3Double(37.86963434512325,-122.2593873127355,250000);
{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(GeoViewpoint28);
GeoViewpoint29 := TGeoViewpointNode.Create;
GeoViewpoint29.Description := 'University of California San Francisco';
GeoViewpoint29.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint29.Position := Vector3Double(37.76340647188392,-122.4582475377715,250000);
{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(GeoViewpoint29);
GeoViewpoint30 := TGeoViewpointNode.Create;
GeoViewpoint30.Description := 'University of California Santa Cruz';
GeoViewpoint30.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint30.Position := Vector3Double(36.99628443046043,-122.0534325473795,250000);
{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(GeoViewpoint30);
GeoViewpoint31 := TGeoViewpointNode.Create;
GeoViewpoint31.Description := 'University of California Merced';
GeoViewpoint31.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint31.Position := Vector3Double(37.365508575977,-120.4252597059142,250000);
{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(GeoViewpoint31);
GeoViewpoint32 := TGeoViewpointNode.Create;
GeoViewpoint32.Description := 'University of California Santa Barbara';
GeoViewpoint32.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint32.Position := Vector3Double(34.41124450961521,-119.8479940053906,250000);
{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(GeoViewpoint32);
GeoViewpoint33 := TGeoViewpointNode.Create;
GeoViewpoint33.Description := 'University of California Los Angeles';
GeoViewpoint33.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint33.Position := Vector3Double(34.07224474392262,-118.4408472225642,250000);
{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(GeoViewpoint33);
GeoViewpoint34 := TGeoViewpointNode.Create;
GeoViewpoint34.Description := 'University of California Irvine';
GeoViewpoint34.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint34.Position := Vector3Double(33.64623283675919,-117.8427064139082,250000);
end;

procedure InitCaliforniaCampusesPart2;
begin

{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(GeoViewpoint34);
GeoViewpoint35 := TGeoViewpointNode.Create;
GeoViewpoint35.Description := 'University of California Riverside';
GeoViewpoint35.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint35.Position := Vector3Double(33.97350567066717,-117.3281649569839,250000);
{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(GeoViewpoint35);
GeoViewpoint36 := TGeoViewpointNode.Create;
GeoViewpoint36.Description := 'University of California San Diego';
GeoViewpoint36.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint36.Position := Vector3Double(32.87612136607509,-117.2367298240259,250000);
{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(GeoViewpoint36);
GeoViewpoint37 := TGeoViewpointNode.Create;
GeoViewpoint37.Description := 'Humboldt State University';
GeoViewpoint37.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint37.Position := Vector3Double(40.87630235623448,-124.0785789217266,250000);
{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(GeoViewpoint37);
GeoViewpoint38 := TGeoViewpointNode.Create;
GeoViewpoint38.Description := 'California State University, Chico';
GeoViewpoint38.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint38.Position := Vector3Double(39.73031527724385,-121.8453722745223,250000);
{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(GeoViewpoint38);
GeoViewpoint39 := TGeoViewpointNode.Create;
GeoViewpoint39.Description := 'California State University Sacramento';
GeoViewpoint39.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint39.Position := Vector3Double(38.5626517618963,-121.4244636520556,250000);
{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(GeoViewpoint39);
GeoViewpoint40 := TGeoViewpointNode.Create;
GeoViewpoint40.Description := 'Sonoma State University';
GeoViewpoint40.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint40.Position := Vector3Double(38.33922929793606,-122.6744333530031,250000);
{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(GeoViewpoint40);
GeoViewpoint41 := TGeoViewpointNode.Create;
GeoViewpoint41.Description := 'California Maritime Academy';
GeoViewpoint41.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint41.Position := Vector3Double(38.06907065059484,-122.2309147135222,250000);
{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(GeoViewpoint41);
GeoViewpoint42 := TGeoViewpointNode.Create;
GeoViewpoint42.Description := 'San Francisco State University';
GeoViewpoint42.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint42.Position := Vector3Double(37.722876,-122.4781512190666,250000);
end;

procedure InitCaliforniaCampusesPart3;
begin

{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(GeoViewpoint42);
GeoViewpoint43 := TGeoViewpointNode.Create;
GeoViewpoint43.Description := 'California State University, East Bay';
GeoViewpoint43.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint43.Position := Vector3Double(37.65707914139907,-122.0569190659761,250000);
{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(GeoViewpoint43);
GeoViewpoint44 := TGeoViewpointNode.Create;
GeoViewpoint44.Description := 'California State University Stanislaus';
GeoViewpoint44.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint44.Position := Vector3Double(37.52552478005697,-120.8563508560606,250000);
{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(GeoViewpoint44);
GeoViewpoint45 := TGeoViewpointNode.Create;
GeoViewpoint45.Description := 'San Jose State University';
GeoViewpoint45.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint45.Position := Vector3Double(37.33580940527095,-121.8815343755784,250000);
{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(GeoViewpoint45);
GeoViewpoint46 := TGeoViewpointNode.Create;
GeoViewpoint46.Description := 'California State University, Monterey Bay';
GeoViewpoint46.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint46.Position := Vector3Double(36.6538071781493,-121.7984465276711,250000);
{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(GeoViewpoint46);
GeoViewpoint47 := TGeoViewpointNode.Create;
GeoViewpoint47.Description := 'Fresno State University';
GeoViewpoint47.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint47.Position := Vector3Double(36.812166,-119.7451552005852,250000);
{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(GeoViewpoint47);
GeoViewpoint48 := TGeoViewpointNode.Create;
GeoViewpoint48.Description := 'California State University, Bakersfield';
GeoViewpoint48.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint48.Position := Vector3Double(35.350804,-119.1043226128032,250000);
{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(GeoViewpoint48);
GeoViewpoint49 := TGeoViewpointNode.Create;
GeoViewpoint49.Description := 'California Polytechnic State University';
GeoViewpoint49.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint49.Position := Vector3Double(35.30115692599171,-120.6595761796351,250000);
{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(GeoViewpoint49);
GeoViewpoint50 := TGeoViewpointNode.Create;
GeoViewpoint50.Description := 'California State University, Channel Islands';
GeoViewpoint50.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint50.Position := Vector3Double(34.1624126428852,-119.0425264841287,250000);
end;

procedure InitCaliforniaCampusesPart4;
begin

{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(GeoViewpoint50);
GeoViewpoint51 := TGeoViewpointNode.Create;
GeoViewpoint51.Description := 'California State University, Northridge';
GeoViewpoint51.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint51.Position := Vector3Double(34.23959265263849,-118.5284272400904,250000);
{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(GeoViewpoint51);
GeoViewpoint52 := TGeoViewpointNode.Create;
GeoViewpoint52.Description := 'California State University, Los Angeles';
GeoViewpoint52.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint52.Position := Vector3Double(34.06645996626264,-118.1682050902557,250000);
{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(GeoViewpoint52);
GeoViewpoint53 := TGeoViewpointNode.Create;
GeoViewpoint53.Description := 'California State Polytechnic University, Pomona';
GeoViewpoint53.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint53.Position := Vector3Double(34.05727150000314,-117.8215320234812,250000);
{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(GeoViewpoint53);
GeoViewpoint54 := TGeoViewpointNode.Create;
GeoViewpoint54.Description := 'California State University, San Bernardino';
GeoViewpoint54.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint54.Position := Vector3Double(34.18180116432101,-117.3243676664719,250000);
{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(GeoViewpoint54);
GeoViewpoint55 := TGeoViewpointNode.Create;
GeoViewpoint55.Description := 'California State University, Fullerton';
GeoViewpoint55.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint55.Position := Vector3Double(33.882522,-117.8868367869023,250000);
{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(GeoViewpoint55);
GeoViewpoint56 := TGeoViewpointNode.Create;
GeoViewpoint56.Description := 'California State University Dominguez Hills';
GeoViewpoint56.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint56.Position := Vector3Double(33.86463396857103,-118.2553596272055,250000);
{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(GeoViewpoint56);
GeoViewpoint57 := TGeoViewpointNode.Create;
GeoViewpoint57.Description := 'California State University, Long Beach';
GeoViewpoint57.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint57.Position := Vector3Double(33.78196696470824,-118.112678253688,250000);
{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(GeoViewpoint57);
GeoViewpoint58 := TGeoViewpointNode.Create;
GeoViewpoint58.Description := 'California State University, San Marcos';
GeoViewpoint58.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint58.Position := Vector3Double(33.12837619265174,-117.1600194071002,250000);
end;

procedure InitCaliforniaCampusesPart5;
begin

{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(GeoViewpoint58);
GeoViewpoint59 := TGeoViewpointNode.Create;
GeoViewpoint59.Description := 'San Diego State University';
GeoViewpoint59.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint59.Position := Vector3Double(32.77593126586385,-117.0722876242553,250000);
{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(GeoViewpoint59);
GeoViewpoint60 := TGeoViewpointNode.Create;
GeoViewpoint60.Description := 'CENIC';
GeoViewpoint60.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint60.Position := Vector3Double(33.879947,-118.027903,250000);
{ METHOD .FdChildren.Add }
Group25.FdChildren.Add(GeoViewpoint60);
{ METHOD .FdChildren.Add }
Group20.FdChildren.Add(Group25);
{ ==================== }
X3DExternalPrototype61 := TX3DExternalPrototype.Create;
X3DExternalPrototype61.Appinfo := 'CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point';
X3DExternalPrototype61.Url := '\"../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair\" \"https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair\" \"../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair\" \"https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair\"';
SFBool62 := TSFBool.CreateUndefined(X3DExternalPrototype61, false, 'enabled');
SFBool62.Appinfo := 'whether CrossHair prototype is enabled or not';
{ METHOD .AddSFBool }
X3DExternalPrototype61.AddSFBool([SFBool62]);
SFBool63 := TSFBool.CreateUndefined(X3DExternalPrototype61, false, 'set_enabled');
SFBool63.Appinfo := 'control whether enabled/disabled';
{ METHOD .AddSFBool }
X3DExternalPrototype61.AddSFBool([SFBool63]);
SFColor64 := TSFColor.CreateUndefined(X3DExternalPrototype61, false, 'markerColor');
SFColor64.Appinfo := 'color of CrossHair marker';
{ METHOD .AddSFColor }
X3DExternalPrototype61.AddSFColor([SFColor64]);
SFVec3f65 := TSFVec3f.CreateUndefined(X3DExternalPrototype61, false, 'scale');
SFVec3f65.Appinfo := 'size of CrossHair in meters';
{ METHOD .AddSFVec3f }
X3DExternalPrototype61.AddSFVec3f([SFVec3f65]);
SFVec3f66 := TSFVec3f.CreateUndefined(X3DExternalPrototype61, false, 'positionOffsetFromCamera');
SFVec3f66.Appinfo := 'distance in front of HUD viewpoint';
{ METHOD .AddSFVec3f }
X3DExternalPrototype61.AddSFVec3f([SFVec3f66]);
{ METHOD .AddX3DExternalPrototype }
Group20.AddX3DExternalPrototype([X3DExternalPrototype61]);
X3DPrototype67 := TX3DPrototypeNode.Create;
SFBool68 := TSFBool.CreateUndefined(X3DPrototype67, false, 'enabled');
SFBool68.Value := 'true';
{ METHOD .AddSFBool }
X3DPrototype67.AddSFBool([SFBool68]);
SFColor69 := TSFColor.CreateUndefined(X3DPrototype67, false, 'markerColor');
SFColor69.Value := '0.1 0.8 0.1';
{ METHOD .AddSFColor }
X3DPrototype67.AddSFColor([SFColor69]);
SFVec3f70 := TSFVec3f.CreateUndefined(X3DPrototype67, false, 'scale');
SFVec3f70.Value := '0.5 0.5 0.5';
end;

procedure InitCaliforniaCampusesPart6;
begin

{ METHOD .AddSFVec3f }
X3DPrototype67.AddSFVec3f([SFVec3f70]);
SFVec3f71 := TSFVec3f.CreateUndefined(X3DPrototype67, false, 'positionOffsetFromCamera');
SFVec3f71.Value := '0 0 -5';
{ METHOD .AddSFVec3f }
X3DPrototype67.AddSFVec3f([SFVec3f71]);
{ METHOD .AddX3DPrototype }
Group20.AddX3DPrototype([X3DPrototype67]);
{ ==================== }
X3DExternalPrototype72 := TX3DExternalPrototype.Create;
X3DExternalPrototype72.Appinfo := 'Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location';
X3DExternalPrototype72.Url := '\"../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay\" \"https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay\" \"../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay\" \"https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay\"';
MFNode73 := TMFNode.CreateUndefined(X3DExternalPrototype72, false, 'children');
MFNode73.Appinfo := 'X3D content positioned at HUD offset';
{ METHOD .AddMFNode }
X3DExternalPrototype72.AddMFNode([MFNode73]);
SFVec3f74 := TSFVec3f.CreateUndefined(X3DExternalPrototype72, false, 'screenOffset');
SFVec3f74.Appinfo := 'offset position for HUD relative to current view location, default 0 0 -5';
{ METHOD .AddSFVec3f }
X3DExternalPrototype72.AddSFVec3f([SFVec3f74]);
SFVec3f75 := TSFVec3f.CreateUndefined(X3DExternalPrototype72, false, 'position_changed');
SFVec3f75.Appinfo := 'HUD position update (in world coordinates) relative to original location';
{ METHOD .AddSFVec3f }
X3DExternalPrototype72.AddSFVec3f([SFVec3f75]);
SFRotation76 := TSFRotation.CreateUndefined(X3DExternalPrototype72, false, 'orientation_changed');
SFRotation76.Appinfo := 'HUD orientation update relative to original location';
{ METHOD .AddSFRotation }
X3DExternalPrototype72.AddSFRotation([SFRotation76]);
{ METHOD .AddX3DExternalPrototype }
Group20.AddX3DExternalPrototype([X3DExternalPrototype72]);
{ ==================== }
X3DExternalPrototype77 := TX3DExternalPrototype.Create;
X3DExternalPrototype77.Appinfo := 'Sequentially binds each Viewpoint in a set of Viewpoint USE nodes, creating an automatic tour for a scene';
X3DExternalPrototype77.Url := '\"../../Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer\" \"https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer\" \"../../Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer\" \"https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer\"';
MFNode78 := TMFNode.CreateUndefined(X3DExternalPrototype77, false, 'viewpoints');
MFNode78.Appinfo := 'Viewpoint USE nodes that are sequentially bound';
{ METHOD .AddMFNode }
X3DExternalPrototype77.AddMFNode([MFNode78]);
SFTime79 := TSFTime.CreateUndefined(X3DExternalPrototype77, false, 'interval');
SFTime79.Appinfo := 'number of seconds between viewpoint shifts';
{ METHOD .AddSFTime }
X3DExternalPrototype77.AddSFTime([SFTime79]);
SFBool80 := TSFBool.CreateUndefined(X3DExternalPrototype77, false, 'enabled');
SFBool80.Appinfo := 'whether ViewpointSequencer is enabled or not';
{ METHOD .AddSFBool }
X3DExternalPrototype77.AddSFBool([SFBool80]);
SFBool81 := TSFBool.CreateUndefined(X3DExternalPrototype77, false, 'set_enabled');
SFBool81.Appinfo := 'whether ViewpointSequencer is enabled or not';
{ METHOD .AddSFBool }
X3DExternalPrototype77.AddSFBool([SFBool81]);
SFBool82 := TSFBool.CreateUndefined(X3DExternalPrototype77, false, 'previous');
SFBool82.Appinfo := 'bind previous Viewpoint in list';
{ METHOD .AddSFBool }
X3DExternalPrototype77.AddSFBool([SFBool82]);
SFBool83 := TSFBool.CreateUndefined(X3DExternalPrototype77, false, 'next');
end;

procedure InitCaliforniaCampusesPart7;
begin

SFBool83.Appinfo := 'bind next Viewpoint in list';
{ METHOD .AddSFBool }
X3DExternalPrototype77.AddSFBool([SFBool83]);
MFString84 := TMFString.CreateUndefined(X3DExternalPrototype77, false, 'toggleMessage');
MFString84.Appinfo := 'Select message to toggle ViewpointSequencer';
{ METHOD .AddMFString }
X3DExternalPrototype77.AddMFString([MFString84]);
SFFloat85 := TSFFloat.CreateUndefined(X3DExternalPrototype77, false, 'toggleMessageFontSize');
SFFloat85.Appinfo := 'Color for toggleMessage text';
{ METHOD .AddSFFloat }
X3DExternalPrototype77.AddSFFloat([SFFloat85]);
SFColor86 := TSFColor.CreateUndefined(X3DExternalPrototype77, false, 'toggleMessageColor');
SFColor86.Appinfo := 'Color for toggleMessage text';
{ METHOD .AddSFColor }
X3DExternalPrototype77.AddSFColor([SFColor86]);
SFBool87 := TSFBool.CreateUndefined(X3DExternalPrototype77, false, 'traceEnabled');
SFBool87.Appinfo := 'enable console output';
{ METHOD .AddSFBool }
X3DExternalPrototype77.AddSFBool([SFBool87]);
{ METHOD .AddX3DExternalPrototype }
Group20.AddX3DExternalPrototype([X3DExternalPrototype77]);
X3DPrototype88 := TX3DPrototypeNode.Create;
SFTime89 := TSFTime.CreateUndefined(X3DPrototype88, false, 'interval');
SFTime89.Value := '30';
{ METHOD .AddSFTime }
X3DPrototype88.AddSFTime([SFTime89]);
SFBool90 := TSFBool.CreateUndefined(X3DPrototype88, false, 'enabled');
SFBool90.Value := 'true';
{ METHOD .AddSFBool }
X3DPrototype88.AddSFBool([SFBool90]);
MFString91 := TMFString.CreateUndefined(X3DPrototype88, false, 'toggleMessage');
MFString91.Value := '\"ViewpointSequencer tour\"';
{ METHOD .AddMFString }
X3DPrototype88.AddMFString([MFString91]);
MFNode92 := TMFNode.CreateUndefined(X3DPrototype88, false, 'viewpoints');
{ METHOD .AddGeoViewpoint }
MFNode92.AddGeoViewpoint([GeoViewpoint26]);
{ METHOD .AddGeoViewpoint }
MFNode92.AddGeoViewpoint([GeoViewpoint27]);
{ METHOD .AddGeoViewpoint }
MFNode92.AddGeoViewpoint([GeoViewpoint28]);
{ METHOD .AddGeoViewpoint }
MFNode92.AddGeoViewpoint([GeoViewpoint29]);
{ METHOD .AddGeoViewpoint }
MFNode92.AddGeoViewpoint([GeoViewpoint30]);
{ METHOD .AddGeoViewpoint }
MFNode92.AddGeoViewpoint([GeoViewpoint31]);
{ METHOD .AddGeoViewpoint }
MFNode92.AddGeoViewpoint([GeoViewpoint32]);
{ METHOD .AddGeoViewpoint }
MFNode92.AddGeoViewpoint([GeoViewpoint33]);
{ METHOD .AddGeoViewpoint }
MFNode92.AddGeoViewpoint([GeoViewpoint34]);
{ METHOD .AddGeoViewpoint }
MFNode92.AddGeoViewpoint([GeoViewpoint35]);
{ METHOD .AddGeoViewpoint }
MFNode92.AddGeoViewpoint([GeoViewpoint36]);
{ METHOD .AddGeoViewpoint }
MFNode92.AddGeoViewpoint([GeoViewpoint37]);
{ METHOD .AddGeoViewpoint }
MFNode92.AddGeoViewpoint([GeoViewpoint38]);
{ METHOD .AddGeoViewpoint }
MFNode92.AddGeoViewpoint([GeoViewpoint39]);
end;

procedure InitCaliforniaCampusesPart8;
begin

{ METHOD .AddGeoViewpoint }
MFNode92.AddGeoViewpoint([GeoViewpoint40]);
{ METHOD .AddGeoViewpoint }
MFNode92.AddGeoViewpoint([GeoViewpoint41]);
{ METHOD .AddGeoViewpoint }
MFNode92.AddGeoViewpoint([GeoViewpoint42]);
{ METHOD .AddGeoViewpoint }
MFNode92.AddGeoViewpoint([GeoViewpoint43]);
{ METHOD .AddGeoViewpoint }
MFNode92.AddGeoViewpoint([GeoViewpoint44]);
{ METHOD .AddGeoViewpoint }
MFNode92.AddGeoViewpoint([GeoViewpoint45]);
{ METHOD .AddGeoViewpoint }
MFNode92.AddGeoViewpoint([GeoViewpoint46]);
{ METHOD .AddGeoViewpoint }
MFNode92.AddGeoViewpoint([GeoViewpoint47]);
{ METHOD .AddGeoViewpoint }
MFNode92.AddGeoViewpoint([GeoViewpoint48]);
{ METHOD .AddGeoViewpoint }
MFNode92.AddGeoViewpoint([GeoViewpoint49]);
{ METHOD .AddGeoViewpoint }
MFNode92.AddGeoViewpoint([GeoViewpoint50]);
{ METHOD .AddGeoViewpoint }
MFNode92.AddGeoViewpoint([GeoViewpoint51]);
{ METHOD .AddGeoViewpoint }
MFNode92.AddGeoViewpoint([GeoViewpoint52]);
{ METHOD .AddGeoViewpoint }
MFNode92.AddGeoViewpoint([GeoViewpoint53]);
{ METHOD .AddGeoViewpoint }
MFNode92.AddGeoViewpoint([GeoViewpoint54]);
{ METHOD .AddGeoViewpoint }
MFNode92.AddGeoViewpoint([GeoViewpoint55]);
{ METHOD .AddGeoViewpoint }
MFNode92.AddGeoViewpoint([GeoViewpoint56]);
{ METHOD .AddGeoViewpoint }
MFNode92.AddGeoViewpoint([GeoViewpoint57]);
{ METHOD .AddGeoViewpoint }
MFNode92.AddGeoViewpoint([GeoViewpoint58]);
{ METHOD .AddGeoViewpoint }
MFNode92.AddGeoViewpoint([GeoViewpoint59]);
{ METHOD .AddGeoViewpoint }
MFNode92.AddGeoViewpoint([GeoViewpoint60]);
Viewpoint128 := TViewpointNode.Create;
Viewpoint128.Description := 'View four (-X axis)';
Viewpoint128.Orientation := Vector4(0,1,0,-1.57);
Viewpoint128.Position := Vector3(-10,0,0);
{ METHOD .AddViewpoint }
MFNode92.AddViewpoint([Viewpoint128]);
{ METHOD .AddMFNode }
X3DPrototype88.AddMFNode([MFNode92]);
{ initially enabled is off, scene provides selectable text to activate }
{ METHOD .AddX3DPrototype }
Group20.AddX3DPrototype([X3DPrototype88]);
{ ==================== }
GeoLocation129 := TGeoLocationNode.Create;
GeoLocation129.GeoCoords := Vector3Double(36.595599,-121.877148,624990);
Billboard130 := TBillboardNode.Create;
Billboard130.AxisOfRotation := Vector3(0,0,0);
Shape131 := TShapeNode.Create;
Text132 := TTextNode.Create;
Text132.SetText(['ViewpointSequencer tour']);
FontStyle133 := TFontStyleNode.Create;
FontStyle133.Justify := fjMIDDLE;
FontStyle133.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
Text132.FontStyle := FontStyle133;
{ METHOD .Geometry }
Shape131.Geometry := Text132;
end;

procedure InitCaliforniaCampusesPart9;
begin

Appearance134 := TAppearanceNode.Create;
Material135 := TMaterialNode.Create;
Material135.AmbientIntensity := 0.25;
Material135.DiffuseColor := Vector3(0.795918,0.505869,0.093315);
Material135.Shininess := 0.39;
Material135.SpecularColor := Vector3(0.923469,0.428866,0.006369);
{ METHOD .SetMaterial }
Appearance134.Material := Material135;
{ METHOD .Appearance }
Shape131.Appearance := Appearance134;
{ METHOD .FdChildren.Add }
Billboard130.FdChildren.Add(Shape131);
{ METHOD .FdChildren.Add }
GeoLocation129.FdChildren.Add(Billboard130);
TouchSensor136 := TTouchSensorNode.Create;
TouchSensor136.Description := 'Touch text to turn tour on/off';
{ METHOD .FdChildren.Add }
GeoLocation129.FdChildren.Add(TouchSensor136);
BooleanToggle137 := TBooleanToggleNode.Create;
{ METHOD .FdChildren.Add }
GeoLocation129.FdChildren.Add(BooleanToggle137);
{ Original "TourTouch.EventIsActive TO TourToggle.EventSet_boolean }
{ Sample TourTouch.EventIsActive TO TourToggle.EventSet_boolean}
GeoLocation129.AddRoute(TouchSensor136.EventIsActive, BooleanToggle137.EventSet_boolean);
{ METHOD .AddX3DROUTE }
{ Original "TourToggle.toggle TO ViewpointTour.EventSet_enabled }
{ Sample TourToggle.toggle TO ViewpointTour.EventSet_enabled}
GeoLocation129.AddRoute(TourToggle.toggle, X3DPrototype88.EventSet_enabled);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group20.FdChildren.Add(GeoLocation129);
{ ==================== }
X3DExternalPrototype140 := TX3DExternalPrototype.Create;
X3DExternalPrototype140.Appinfo := 'ViewPositionOrientation provides provides console output of local position and orientation as user navigates';
X3DExternalPrototype140.Url := '\"../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation\" \"https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation\" \"../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation\" \"https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation\"';
SFBool141 := TSFBool.CreateUndefined(X3DExternalPrototype140, false, 'enabled');
SFBool141.Appinfo := 'Whether or not ViewPositionOrientation sends output to console';
{ METHOD .AddSFBool }
X3DExternalPrototype140.AddSFBool([SFBool141]);
SFBool142 := TSFBool.CreateUndefined(X3DExternalPrototype140, false, 'traceEnabled');
SFBool142.Appinfo := 'Output internal trace messages for debugging this node, intended for developer use only';
{ METHOD .AddSFBool }
X3DExternalPrototype140.AddSFBool([SFBool142]);
SFBool143 := TSFBool.CreateUndefined(X3DExternalPrototype140, false, 'set_traceEnabled');
SFBool143.Appinfo := 'Ability to turn output tracing on/off at runtime';
{ METHOD .AddSFBool }
X3DExternalPrototype140.AddSFBool([SFBool143]);
SFVec3f144 := TSFVec3f.CreateUndefined(X3DExternalPrototype140, false, 'position_changed');
SFVec3f144.Appinfo := 'Output local position';
{ METHOD .AddSFVec3f }
X3DExternalPrototype140.AddSFVec3f([SFVec3f144]);
SFRotation145 := TSFRotation.CreateUndefined(X3DExternalPrototype140, false, 'orientation_changed');
SFRotation145.Appinfo := 'Output local orientation';
{ METHOD .AddSFRotation }
X3DExternalPrototype140.AddSFRotation([SFRotation145]);
MFString146 := TMFString.CreateUndefined(X3DExternalPrototype140, false, 'outputViewpointString');
MFString146.Appinfo := 'MFString value of new Viewpoint';
{ METHOD .AddMFString }
X3DExternalPrototype140.AddMFString([MFString146]);
{ METHOD .AddX3DExternalPrototype }
Group20.AddX3DExternalPrototype([X3DExternalPrototype140]);
end;

procedure InitCaliforniaCampusesPart10;
begin

X3DPrototype147 := TX3DPrototypeNode.Create;
SFBool148 := TSFBool.CreateUndefined(X3DPrototype147, false, 'enabled');
SFBool148.Value := 'false';
{ METHOD .AddSFBool }
X3DPrototype147.AddSFBool([SFBool148]);
{ METHOD .AddX3DPrototype }
Group20.AddX3DPrototype([X3DPrototype147]);
{ ==================== }
{ METHOD .AddGroup }
X3D0.AddChildren([Group20]);
end;

function CreateCaliforniaCampuses: TX3DRootNode;
begin
InitCaliforniaCampusesPart0;
InitCaliforniaCampusesPart1;
InitCaliforniaCampusesPart2;
InitCaliforniaCampusesPart3;
InitCaliforniaCampusesPart4;
InitCaliforniaCampusesPart5;
InitCaliforniaCampusesPart6;
InitCaliforniaCampusesPart7;
InitCaliforniaCampusesPart8;
InitCaliforniaCampusesPart9;
InitCaliforniaCampusesPart10;
Result := X3D0;
end;

begin
end.
