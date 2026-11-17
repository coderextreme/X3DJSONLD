unit CaliforniaCampuses;

interface

uses X3DNodes;

function CreateCaliforniaCampuses: TX3DRootNode;

implementation

uses CastleVectors;

function CreateCaliforniaCampuses: TX3DRootNode;
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
X3DField62: TX3DField;
X3DField63: TX3DField;
X3DField64: TX3DField;
X3DField65: TX3DField;
X3DField66: TX3DField;
X3DPrototype67: TX3DPrototypeNode;
SFBool68: TSFBool;
SFColor69: TSFColor;
SFVec3f70: TSFVec3f;
SFVec3f71: TSFVec3f;
X3DExternalPrototype72: TX3DExternalPrototype;
X3DField73: TX3DField;
X3DField74: TX3DField;
X3DField75: TX3DField;
X3DField76: TX3DField;
X3DExternalPrototype77: TX3DExternalPrototype;
X3DField78: TX3DField;
X3DField79: TX3DField;
X3DField80: TX3DField;
X3DField81: TX3DField;
X3DField82: TX3DField;
X3DField83: TX3DField;
X3DField84: TX3DField;
X3DField85: TX3DField;
X3DField86: TX3DField;
X3DField87: TX3DField;
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
X3DField141: TX3DField;
X3DField142: TX3DField;
X3DField143: TX3DField;
X3DField144: TX3DField;
X3DField145: TX3DField;
X3DField146: TX3DField;
X3DPrototype147: TX3DPrototypeNode;
SFBool148: TSFBool;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Geospatial'] := 1;
X3D0.Meta['title'] := 'CaliforniaCampuses.x3d';
X3D0.Meta['description'] := 'Viewpoints and tour of California campuses';
X3D0.Meta['creator'] := 'Don Brutzman, Dale Tourtelotte, Mike Bailey, Don McGregor';
X3D0.Meta['created'] := '4 March 2010';
X3D0.Meta['modified'] := '20 October 2019';
X3D0.Meta['reference'] := 'CaliforniaCampuses.kml';
X3D0.Meta['reference'] := 'https://www.web3d.org/x3d-earth';
X3D0.Meta['reference'] := 'http://x3d-earth.nps.edu';
X3D0.Meta['reference'] := 'http://hamming.uc.nps.edu';
X3D0.Meta['subject'] := 'X3D Earth';
X3D0.Meta['identifier'] := 'https://www.web3d.org/x3d/content/examples/Basic/Geospatial/CaliforniaCampuses.x3d';
X3D0.Meta['reference'] := 'http://mmog.ern.nps.edu/California/California.x3d';
X3D0.Meta['warning'] := 'under development';
X3D0.Meta['warning'] := 'mmog.ern.nps.edu restricted to internal access within NPS firewall only';
X3D0.Meta['generator'] := 'KmlToX3dViewpoints.xslt';
X3D0.Meta['generator'] := 'X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['license'] := 'https://savage.nps.edu/Savage/license.html';
Group20 := TGroupNode.Create;
WorldInfo21 := TWorldInfoNode.Create;
WorldInfo21.Title := 'CaliforniaCampuses.x3d';
{ .AddChildren }
Group20.AddChildren([WorldInfo21]);
Switch22 := TSwitchNode.Create;
Switch22.WhichChoice := 0;
{ Select globe of interest. Warning: may need to keep alternate globes commented out to prevent browser caching. }
Inline23 := TInlineNode.Create;
Inline23.SetUrl(['http://x3d-earth.nps.edu/osmdemo.x3d']);
{ .AddChildren }
Switch22.AddChildren([Inline23]);
{ <Inline load='false' url='"http://mmog.ern.nps.edu/California/California.x3d"'/> }
{ <Inline load='false' url='"http://x3d-earth.nps.edu/7_levels_plus/tiles/0/globe.x3d"'/> }
{ <Inline load='false' url='"http://x3d-earth.nps.edu/globe/MBARI1MinuteBathy/world.x3d"'/> }
{ <Inline load='false' url='"http://x3d-earth.nps.edu/globe/SRTM30Plus/world.x3d"'/> }
{ .AddChildren }
Group20.AddChildren([Switch22]);
NavigationInfo24 := TNavigationInfoNode.Create;
NavigationInfo24.SetTransitionType(['ANIMATE']);
{ .AddChildren }
Group20.AddChildren([NavigationInfo24]);
Group25 := TGroupNode.Create;
GeoViewpoint26 := TGeoViewpointNode.Create;
GeoViewpoint26.Description := 'Naval Postgraduate School';
GeoViewpoint26.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint26.Position := Vector3Double(36.595599,-121.877148,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint26]);
GeoViewpoint27 := TGeoViewpointNode.Create;
GeoViewpoint27.Description := 'University of California Davis';
GeoViewpoint27.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint27.Position := Vector3Double(38.53650615157984,-121.7489628616831,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint27]);
GeoViewpoint28 := TGeoViewpointNode.Create;
GeoViewpoint28.Description := 'University of California Berkeley';
GeoViewpoint28.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint28.Position := Vector3Double(37.86963434512325,-122.2593873127355,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint28]);
GeoViewpoint29 := TGeoViewpointNode.Create;
GeoViewpoint29.Description := 'University of California San Francisco';
GeoViewpoint29.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint29.Position := Vector3Double(37.76340647188392,-122.4582475377715,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint29]);
GeoViewpoint30 := TGeoViewpointNode.Create;
GeoViewpoint30.Description := 'University of California Santa Cruz';
GeoViewpoint30.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint30.Position := Vector3Double(36.99628443046043,-122.0534325473795,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint30]);
GeoViewpoint31 := TGeoViewpointNode.Create;
GeoViewpoint31.Description := 'University of California Merced';
GeoViewpoint31.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint31.Position := Vector3Double(37.365508575977,-120.4252597059142,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint31]);
GeoViewpoint32 := TGeoViewpointNode.Create;
GeoViewpoint32.Description := 'University of California Santa Barbara';
GeoViewpoint32.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint32.Position := Vector3Double(34.41124450961521,-119.8479940053906,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint32]);
GeoViewpoint33 := TGeoViewpointNode.Create;
GeoViewpoint33.Description := 'University of California Los Angeles';
GeoViewpoint33.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint33.Position := Vector3Double(34.07224474392262,-118.4408472225642,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint33]);
GeoViewpoint34 := TGeoViewpointNode.Create;
GeoViewpoint34.Description := 'University of California Irvine';
GeoViewpoint34.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint34.Position := Vector3Double(33.64623283675919,-117.8427064139082,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint34]);
GeoViewpoint35 := TGeoViewpointNode.Create;
GeoViewpoint35.Description := 'University of California Riverside';
GeoViewpoint35.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint35.Position := Vector3Double(33.97350567066717,-117.3281649569839,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint35]);
GeoViewpoint36 := TGeoViewpointNode.Create;
GeoViewpoint36.Description := 'University of California San Diego';
GeoViewpoint36.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint36.Position := Vector3Double(32.87612136607509,-117.2367298240259,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint36]);
GeoViewpoint37 := TGeoViewpointNode.Create;
GeoViewpoint37.Description := 'Humboldt State University';
GeoViewpoint37.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint37.Position := Vector3Double(40.87630235623448,-124.0785789217266,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint37]);
GeoViewpoint38 := TGeoViewpointNode.Create;
GeoViewpoint38.Description := 'California State University, Chico';
GeoViewpoint38.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint38.Position := Vector3Double(39.73031527724385,-121.8453722745223,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint38]);
GeoViewpoint39 := TGeoViewpointNode.Create;
GeoViewpoint39.Description := 'California State University Sacramento';
GeoViewpoint39.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint39.Position := Vector3Double(38.5626517618963,-121.4244636520556,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint39]);
GeoViewpoint40 := TGeoViewpointNode.Create;
GeoViewpoint40.Description := 'Sonoma State University';
GeoViewpoint40.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint40.Position := Vector3Double(38.33922929793606,-122.6744333530031,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint40]);
GeoViewpoint41 := TGeoViewpointNode.Create;
GeoViewpoint41.Description := 'California Maritime Academy';
GeoViewpoint41.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint41.Position := Vector3Double(38.06907065059484,-122.2309147135222,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint41]);
GeoViewpoint42 := TGeoViewpointNode.Create;
GeoViewpoint42.Description := 'San Francisco State University';
GeoViewpoint42.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint42.Position := Vector3Double(37.722876,-122.4781512190666,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint42]);
GeoViewpoint43 := TGeoViewpointNode.Create;
GeoViewpoint43.Description := 'California State University, East Bay';
GeoViewpoint43.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint43.Position := Vector3Double(37.65707914139907,-122.0569190659761,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint43]);
GeoViewpoint44 := TGeoViewpointNode.Create;
GeoViewpoint44.Description := 'California State University Stanislaus';
GeoViewpoint44.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint44.Position := Vector3Double(37.52552478005697,-120.8563508560606,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint44]);
GeoViewpoint45 := TGeoViewpointNode.Create;
GeoViewpoint45.Description := 'San Jose State University';
GeoViewpoint45.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint45.Position := Vector3Double(37.33580940527095,-121.8815343755784,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint45]);
GeoViewpoint46 := TGeoViewpointNode.Create;
GeoViewpoint46.Description := 'California State University, Monterey Bay';
GeoViewpoint46.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint46.Position := Vector3Double(36.6538071781493,-121.7984465276711,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint46]);
GeoViewpoint47 := TGeoViewpointNode.Create;
GeoViewpoint47.Description := 'Fresno State University';
GeoViewpoint47.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint47.Position := Vector3Double(36.812166,-119.7451552005852,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint47]);
GeoViewpoint48 := TGeoViewpointNode.Create;
GeoViewpoint48.Description := 'California State University, Bakersfield';
GeoViewpoint48.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint48.Position := Vector3Double(35.350804,-119.1043226128032,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint48]);
GeoViewpoint49 := TGeoViewpointNode.Create;
GeoViewpoint49.Description := 'California Polytechnic State University';
GeoViewpoint49.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint49.Position := Vector3Double(35.30115692599171,-120.6595761796351,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint49]);
GeoViewpoint50 := TGeoViewpointNode.Create;
GeoViewpoint50.Description := 'California State University, Channel Islands';
GeoViewpoint50.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint50.Position := Vector3Double(34.1624126428852,-119.0425264841287,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint50]);
GeoViewpoint51 := TGeoViewpointNode.Create;
GeoViewpoint51.Description := 'California State University, Northridge';
GeoViewpoint51.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint51.Position := Vector3Double(34.23959265263849,-118.5284272400904,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint51]);
GeoViewpoint52 := TGeoViewpointNode.Create;
GeoViewpoint52.Description := 'California State University, Los Angeles';
GeoViewpoint52.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint52.Position := Vector3Double(34.06645996626264,-118.1682050902557,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint52]);
GeoViewpoint53 := TGeoViewpointNode.Create;
GeoViewpoint53.Description := 'California State Polytechnic University, Pomona';
GeoViewpoint53.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint53.Position := Vector3Double(34.05727150000314,-117.8215320234812,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint53]);
GeoViewpoint54 := TGeoViewpointNode.Create;
GeoViewpoint54.Description := 'California State University, San Bernardino';
GeoViewpoint54.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint54.Position := Vector3Double(34.18180116432101,-117.3243676664719,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint54]);
GeoViewpoint55 := TGeoViewpointNode.Create;
GeoViewpoint55.Description := 'California State University, Fullerton';
GeoViewpoint55.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint55.Position := Vector3Double(33.882522,-117.8868367869023,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint55]);
GeoViewpoint56 := TGeoViewpointNode.Create;
GeoViewpoint56.Description := 'California State University Dominguez Hills';
GeoViewpoint56.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint56.Position := Vector3Double(33.86463396857103,-118.2553596272055,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint56]);
GeoViewpoint57 := TGeoViewpointNode.Create;
GeoViewpoint57.Description := 'California State University, Long Beach';
GeoViewpoint57.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint57.Position := Vector3Double(33.78196696470824,-118.112678253688,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint57]);
GeoViewpoint58 := TGeoViewpointNode.Create;
GeoViewpoint58.Description := 'California State University, San Marcos';
GeoViewpoint58.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint58.Position := Vector3Double(33.12837619265174,-117.1600194071002,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint58]);
GeoViewpoint59 := TGeoViewpointNode.Create;
GeoViewpoint59.Description := 'San Diego State University';
GeoViewpoint59.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint59.Position := Vector3Double(32.77593126586385,-117.0722876242553,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint59]);
GeoViewpoint60 := TGeoViewpointNode.Create;
GeoViewpoint60.Description := 'CENIC';
GeoViewpoint60.Orientation := Vector4(1,0,0,-1.57);
GeoViewpoint60.Position := Vector3Double(33.879947,-118.027903,250000);
{ .AddChildren }
Group25.AddChildren([GeoViewpoint60]);
{ .AddChildren }
Group20.AddChildren([Group25]);
{ ==================== }
X3DExternalPrototype61 := TX3DExternalPrototype.Create;
X3DExternalPrototype61.NameField := 'CrossHair';
X3DExternalPrototype61.Appinfo := 'CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point';
X3DExternalPrototype61.Url := '\"../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair\" \"https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair\" \"../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair\" \"https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair\"';
X3DField62 := TX3DField.Create;
X3DField62.NameField := 'enabled';
X3DField62.AccessType := 'initializeOnly';
X3DField62.Appinfo := 'whether CrossHair prototype is enabled or not';
X3DField62.Type := 'SFBool';
{ .SetX3DField }
X3DExternalPrototype61.X3DField := X3DField62;
X3DField63 := TX3DField.Create;
X3DField63.NameField := 'set_enabled';
X3DField63.AccessType := 'inputOnly';
X3DField63.Appinfo := 'control whether enabled/disabled';
X3DField63.Type := 'SFBool';
{ .AddX3DField }
X3DExternalPrototype61.X3DField := X3DField63;
X3DField64 := TX3DField.Create;
X3DField64.NameField := 'markerColor';
X3DField64.AccessType := 'inputOutput';
X3DField64.Appinfo := 'color of CrossHair marker';
X3DField64.Type := 'SFColor';
{ .AddX3DField }
X3DExternalPrototype61.X3DField := X3DField64;
X3DField65 := TX3DField.Create;
X3DField65.NameField := 'scale';
X3DField65.AccessType := 'inputOutput';
X3DField65.Appinfo := 'size of CrossHair in meters';
X3DField65.Type := 'SFVec3f';
{ .AddX3DField }
X3DExternalPrototype61.X3DField := X3DField65;
X3DField66 := TX3DField.Create;
X3DField66.NameField := 'positionOffsetFromCamera';
X3DField66.AccessType := 'inputOutput';
X3DField66.Appinfo := 'distance in front of HUD viewpoint';
X3DField66.Type := 'SFVec3f';
{ .AddX3DField }
X3DExternalPrototype61.X3DField := X3DField66;
{ .AddX3DExternalPrototype }
Group20.X3DExternalPrototype := X3DExternalPrototype61;
X3DPrototype67 := TX3DPrototypeNode.Create;
X3DPrototype67.NameField := 'CrossHair';
SFBool68 := TSFBool.Create(CrossHair1, false, 'enabled', True);
SFBool68.NameField := 'enabled';
SFBool68.Value := 'true';
{ .SetSFBool }
X3DPrototype67.SFBool := SFBool68;
SFColor69 := TSFColor.Create(CrossHair1, false, 'markerColor', Vector3(0.1,0.8,0.1));
SFColor69.NameField := 'markerColor';
SFColor69.Value := '0.1 0.8 0.1';
{ .AddSFColor }
X3DPrototype67.SFColor := SFColor69;
SFVec3f70 := TSFVec3f.Create(CrossHair1, false, 'scale', Vector3(0.5,0.5,0.5));
SFVec3f70.NameField := 'scale';
SFVec3f70.Value := '0.5 0.5 0.5';
{ .AddSFVec3f }
X3DPrototype67.SFVec3f := SFVec3f70;
SFVec3f71 := TSFVec3f.Create(CrossHair1, false, 'positionOffsetFromCamera', Vector3(0,0,-5));
SFVec3f71.NameField := 'positionOffsetFromCamera';
SFVec3f71.Value := '0 0 -5';
{ .AddSFVec3f }
X3DPrototype67.SFVec3f := SFVec3f71;
{ .AddX3DPrototype }
Group20.X3DPrototype := X3DPrototype67;
{ ==================== }
X3DExternalPrototype72 := TX3DExternalPrototype.Create;
X3DExternalPrototype72.NameField := 'HeadsUpDisplay';
X3DExternalPrototype72.Appinfo := 'Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location';
X3DExternalPrototype72.Url := '\"../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay\" \"https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay\" \"../../../X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay\" \"https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay\"';
X3DField73 := TX3DField.Create;
X3DField73.NameField := 'children';
X3DField73.AccessType := 'inputOutput';
X3DField73.Appinfo := 'X3D content positioned at HUD offset';
X3DField73.Type := 'MFNode';
{ .SetX3DField }
X3DExternalPrototype72.X3DField := X3DField73;
X3DField74 := TX3DField.Create;
X3DField74.NameField := 'screenOffset';
X3DField74.AccessType := 'inputOutput';
X3DField74.Appinfo := 'offset position for HUD relative to current view location, default 0 0 -5';
X3DField74.Type := 'SFVec3f';
{ .AddX3DField }
X3DExternalPrototype72.X3DField := X3DField74;
X3DField75 := TX3DField.Create;
X3DField75.NameField := 'position_changed';
X3DField75.AccessType := 'outputOnly';
X3DField75.Appinfo := 'HUD position update (in world coordinates) relative to original location';
X3DField75.Type := 'SFVec3f';
{ .AddX3DField }
X3DExternalPrototype72.X3DField := X3DField75;
X3DField76 := TX3DField.Create;
X3DField76.NameField := 'orientation_changed';
X3DField76.AccessType := 'outputOnly';
X3DField76.Appinfo := 'HUD orientation update relative to original location';
X3DField76.Type := 'SFRotation';
{ .AddX3DField }
X3DExternalPrototype72.X3DField := X3DField76;
{ .AddX3DExternalPrototype }
Group20.X3DExternalPrototype := X3DExternalPrototype72;
{ ==================== }
X3DExternalPrototype77 := TX3DExternalPrototype.Create;
X3DExternalPrototype77.NameField := 'ViewpointSequencer';
X3DExternalPrototype77.Appinfo := 'Sequentially binds each Viewpoint in a set of Viewpoint USE nodes, creating an automatic tour for a scene';
X3DExternalPrototype77.Url := '\"../../Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer\" \"https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer\" \"../../Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer\" \"https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer\"';
X3DField78 := TX3DField.Create;
X3DField78.NameField := 'viewpoints';
X3DField78.AccessType := 'initializeOnly';
X3DField78.Appinfo := 'Viewpoint USE nodes that are sequentially bound';
X3DField78.Type := 'MFNode';
{ .SetX3DField }
X3DExternalPrototype77.X3DField := X3DField78;
X3DField79 := TX3DField.Create;
X3DField79.NameField := 'interval';
X3DField79.AccessType := 'inputOutput';
X3DField79.Appinfo := 'number of seconds between viewpoint shifts';
X3DField79.Type := 'SFTime';
{ .AddX3DField }
X3DExternalPrototype77.X3DField := X3DField79;
X3DField80 := TX3DField.Create;
X3DField80.NameField := 'enabled';
X3DField80.AccessType := 'inputOutput';
X3DField80.Appinfo := 'whether ViewpointSequencer is enabled or not';
X3DField80.Type := 'SFBool';
{ .AddX3DField }
X3DExternalPrototype77.X3DField := X3DField80;
X3DField81 := TX3DField.Create;
X3DField81.NameField := 'set_enabled';
X3DField81.AccessType := 'inputOnly';
X3DField81.Appinfo := 'whether ViewpointSequencer is enabled or not';
X3DField81.Type := 'SFBool';
{ .AddX3DField }
X3DExternalPrototype77.X3DField := X3DField81;
X3DField82 := TX3DField.Create;
X3DField82.NameField := 'previous';
X3DField82.AccessType := 'inputOnly';
X3DField82.Appinfo := 'bind previous Viewpoint in list';
X3DField82.Type := 'SFBool';
{ .AddX3DField }
X3DExternalPrototype77.X3DField := X3DField82;
X3DField83 := TX3DField.Create;
X3DField83.NameField := 'next';
X3DField83.AccessType := 'inputOnly';
X3DField83.Appinfo := 'bind next Viewpoint in list';
X3DField83.Type := 'SFBool';
{ .AddX3DField }
X3DExternalPrototype77.X3DField := X3DField83;
X3DField84 := TX3DField.Create;
X3DField84.NameField := 'toggleMessage';
X3DField84.AccessType := 'inputOutput';
X3DField84.Appinfo := 'Select message to toggle ViewpointSequencer';
X3DField84.Type := 'MFString';
{ .AddX3DField }
X3DExternalPrototype77.X3DField := X3DField84;
X3DField85 := TX3DField.Create;
X3DField85.NameField := 'toggleMessageFontSize';
X3DField85.AccessType := 'initializeOnly';
X3DField85.Appinfo := 'Color for toggleMessage text';
X3DField85.Type := 'SFFloat';
{ .AddX3DField }
X3DExternalPrototype77.X3DField := X3DField85;
X3DField86 := TX3DField.Create;
X3DField86.NameField := 'toggleMessageColor';
X3DField86.AccessType := 'inputOutput';
X3DField86.Appinfo := 'Color for toggleMessage text';
X3DField86.Type := 'SFColor';
{ .AddX3DField }
X3DExternalPrototype77.X3DField := X3DField86;
X3DField87 := TX3DField.Create;
X3DField87.NameField := 'traceEnabled';
X3DField87.AccessType := 'inputOutput';
X3DField87.Appinfo := 'enable console output';
X3DField87.Type := 'SFBool';
{ .AddX3DField }
X3DExternalPrototype77.X3DField := X3DField87;
{ .AddX3DExternalPrototype }
Group20.X3DExternalPrototype := X3DExternalPrototype77;
X3DPrototype88 := TX3DPrototypeNode.Create;
X3DPrototype88.NameField := 'ViewpointSequencer';
SFTime89 := TSFTime.Create(ViewpointSequencer3, false, 'interval', 30);
SFTime89.NameField := 'interval';
SFTime89.Value := '30';
{ .SetSFTime }
X3DPrototype88.SFTime := SFTime89;
SFBool90 := TSFBool.Create(ViewpointSequencer3, false, 'enabled', True);
SFBool90.NameField := 'enabled';
SFBool90.Value := 'true';
{ .AddSFBool }
X3DPrototype88.SFBool := SFBool90;
MFString91 := TMFString.Create(ViewpointSequencer3, false, 'toggleMessage', (['ViewpointSequencer tour']));
MFString91.NameField := 'toggleMessage';
MFString91.Value := '\"ViewpointSequencer tour\"';
{ .AddMFString }
X3DPrototype88.MFString := MFString91;
MFNode92 := TMFNode.Create;
MFNode92.NameField := 'viewpoints';
GeoViewpoint93 := GeoViewpoint26;
{ .SetGeoViewpoint }
MFNode92.GeoViewpoint := GeoViewpoint93;
GeoViewpoint94 := GeoViewpoint27;
{ .AddGeoViewpoint }
MFNode92.GeoViewpoint := GeoViewpoint94;
GeoViewpoint95 := GeoViewpoint28;
{ .AddGeoViewpoint }
MFNode92.GeoViewpoint := GeoViewpoint95;
GeoViewpoint96 := GeoViewpoint29;
{ .AddGeoViewpoint }
MFNode92.GeoViewpoint := GeoViewpoint96;
GeoViewpoint97 := GeoViewpoint30;
{ .AddGeoViewpoint }
MFNode92.GeoViewpoint := GeoViewpoint97;
GeoViewpoint98 := GeoViewpoint31;
{ .AddGeoViewpoint }
MFNode92.GeoViewpoint := GeoViewpoint98;
GeoViewpoint99 := GeoViewpoint32;
{ .AddGeoViewpoint }
MFNode92.GeoViewpoint := GeoViewpoint99;
GeoViewpoint100 := GeoViewpoint33;
{ .AddGeoViewpoint }
MFNode92.GeoViewpoint := GeoViewpoint100;
GeoViewpoint101 := GeoViewpoint34;
{ .AddGeoViewpoint }
MFNode92.GeoViewpoint := GeoViewpoint101;
GeoViewpoint102 := GeoViewpoint35;
{ .AddGeoViewpoint }
MFNode92.GeoViewpoint := GeoViewpoint102;
GeoViewpoint103 := GeoViewpoint36;
{ .AddGeoViewpoint }
MFNode92.GeoViewpoint := GeoViewpoint103;
GeoViewpoint104 := GeoViewpoint37;
{ .AddGeoViewpoint }
MFNode92.GeoViewpoint := GeoViewpoint104;
GeoViewpoint105 := GeoViewpoint38;
{ .AddGeoViewpoint }
MFNode92.GeoViewpoint := GeoViewpoint105;
GeoViewpoint106 := GeoViewpoint39;
{ .AddGeoViewpoint }
MFNode92.GeoViewpoint := GeoViewpoint106;
GeoViewpoint107 := GeoViewpoint40;
{ .AddGeoViewpoint }
MFNode92.GeoViewpoint := GeoViewpoint107;
GeoViewpoint108 := GeoViewpoint41;
{ .AddGeoViewpoint }
MFNode92.GeoViewpoint := GeoViewpoint108;
GeoViewpoint109 := GeoViewpoint42;
{ .AddGeoViewpoint }
MFNode92.GeoViewpoint := GeoViewpoint109;
GeoViewpoint110 := GeoViewpoint43;
{ .AddGeoViewpoint }
MFNode92.GeoViewpoint := GeoViewpoint110;
GeoViewpoint111 := GeoViewpoint44;
{ .AddGeoViewpoint }
MFNode92.GeoViewpoint := GeoViewpoint111;
GeoViewpoint112 := GeoViewpoint45;
{ .AddGeoViewpoint }
MFNode92.GeoViewpoint := GeoViewpoint112;
GeoViewpoint113 := GeoViewpoint46;
{ .AddGeoViewpoint }
MFNode92.GeoViewpoint := GeoViewpoint113;
GeoViewpoint114 := GeoViewpoint47;
{ .AddGeoViewpoint }
MFNode92.GeoViewpoint := GeoViewpoint114;
GeoViewpoint115 := GeoViewpoint48;
{ .AddGeoViewpoint }
MFNode92.GeoViewpoint := GeoViewpoint115;
GeoViewpoint116 := GeoViewpoint49;
{ .AddGeoViewpoint }
MFNode92.GeoViewpoint := GeoViewpoint116;
GeoViewpoint117 := GeoViewpoint50;
{ .AddGeoViewpoint }
MFNode92.GeoViewpoint := GeoViewpoint117;
GeoViewpoint118 := GeoViewpoint51;
{ .AddGeoViewpoint }
MFNode92.GeoViewpoint := GeoViewpoint118;
GeoViewpoint119 := GeoViewpoint52;
{ .AddGeoViewpoint }
MFNode92.GeoViewpoint := GeoViewpoint119;
GeoViewpoint120 := GeoViewpoint53;
{ .AddGeoViewpoint }
MFNode92.GeoViewpoint := GeoViewpoint120;
GeoViewpoint121 := GeoViewpoint54;
{ .AddGeoViewpoint }
MFNode92.GeoViewpoint := GeoViewpoint121;
GeoViewpoint122 := GeoViewpoint55;
{ .AddGeoViewpoint }
MFNode92.GeoViewpoint := GeoViewpoint122;
GeoViewpoint123 := GeoViewpoint56;
{ .AddGeoViewpoint }
MFNode92.GeoViewpoint := GeoViewpoint123;
GeoViewpoint124 := GeoViewpoint57;
{ .AddGeoViewpoint }
MFNode92.GeoViewpoint := GeoViewpoint124;
GeoViewpoint125 := GeoViewpoint58;
{ .AddGeoViewpoint }
MFNode92.GeoViewpoint := GeoViewpoint125;
GeoViewpoint126 := GeoViewpoint59;
{ .AddGeoViewpoint }
MFNode92.GeoViewpoint := GeoViewpoint126;
GeoViewpoint127 := GeoViewpoint60;
{ .AddGeoViewpoint }
MFNode92.GeoViewpoint := GeoViewpoint127;
Viewpoint128 := TViewpointNode.Create;
Viewpoint128.Description := 'View four (-X axis)';
Viewpoint128.Orientation := Vector4(0,1,0,-1.57);
Viewpoint128.Position := Vector3(-10,0,0);
{ .AddViewpoint }
MFNode92.Viewpoint := Viewpoint128;
{ .AddMFNode }
X3DPrototype88.MFNode := MFNode92;
{ initially enabled is off, scene provides selectable text to activate }
{ .AddX3DPrototype }
Group20.X3DPrototype := X3DPrototype88;
{ ==================== }
GeoLocation129 := TGeoLocationNode.Create;
GeoLocation129.GeoCoords := Vector3Double(36.595599,-121.877148,624990);
Billboard130 := TBillboardNode.Create;
Billboard130.AxisOfRotation := Vector3(0,0,0);
Shape131 := TShapeNode.Create;
Text132 := TTextNode.Create;
Text132.SetText(['ViewpointSequencer tour']);
FontStyle133 := TFontStyleNode.Create;
FontStyle133.Justify := fjMiddle;
FontStyle133.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text132.FontStyle := FontStyle133;
{ .SetGeometry }
Shape131.Geometry := Text132;
Appearance134 := TAppearanceNode.Create;
Material135 := TMaterialNode.Create;
Material135.AmbientIntensity := 0.25;
Material135.DiffuseColor := Vector3(0.795918,0.505869,0.093315);
Material135.Shininess := 0.39;
Material135.SpecularColor := Vector3(0.923469,0.428866,0.006369);
{ .SetMaterial }
Appearance134.Material := Material135;
{ .SetAppearance }
Shape131.Appearance := Appearance134;
{ .AddChildren }
Billboard130.AddChildren([Shape131]);
{ .AddChildren }
GeoLocation129.AddChildren([Billboard130]);
TouchSensor136 := TTouchSensorNode.Create;
TouchSensor136.Description := 'Touch text to turn tour on/off';
{ .AddChildren }
GeoLocation129.AddChildren([TouchSensor136]);
BooleanToggle137 := TBooleanToggleNode.Create;
{ .AddChildren }
GeoLocation129.AddChildren([BooleanToggle137]);
GeoLocation129.AddRoute(TouchSensor136.FdIsactive, BooleanToggle137.EventSet_boolean);
{ .AddX3DRoute }
GeoLocation129.AddRoute(BooleanToggle137.FdToggle, X3DPrototype88.EventSet_enabled);
{ .AddX3DRoute }
{ .AddChildren }
Group20.AddChildren([GeoLocation129]);
{ ==================== }
X3DExternalPrototype140 := TX3DExternalPrototype.Create;
X3DExternalPrototype140.NameField := 'ViewPositionOrientation';
X3DExternalPrototype140.Appinfo := 'ViewPositionOrientation provides provides console output of local position and orientation as user navigates';
X3DExternalPrototype140.Url := '\"../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation\" \"https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation\" \"../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation\" \"https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation\"';
X3DField141 := TX3DField.Create;
X3DField141.NameField := 'enabled';
X3DField141.AccessType := 'inputOutput';
X3DField141.Appinfo := 'Whether or not ViewPositionOrientation sends output to console';
X3DField141.Type := 'SFBool';
{ .SetX3DField }
X3DExternalPrototype140.X3DField := X3DField141;
X3DField142 := TX3DField.Create;
X3DField142.NameField := 'traceEnabled';
X3DField142.AccessType := 'initializeOnly';
X3DField142.Appinfo := 'Output internal trace messages for debugging this node, intended for developer use only';
X3DField142.Type := 'SFBool';
{ .AddX3DField }
X3DExternalPrototype140.X3DField := X3DField142;
X3DField143 := TX3DField.Create;
X3DField143.NameField := 'set_traceEnabled';
X3DField143.AccessType := 'inputOnly';
X3DField143.Appinfo := 'Ability to turn output tracing on/off at runtime';
X3DField143.Type := 'SFBool';
{ .AddX3DField }
X3DExternalPrototype140.X3DField := X3DField143;
X3DField144 := TX3DField.Create;
X3DField144.NameField := 'position_changed';
X3DField144.AccessType := 'outputOnly';
X3DField144.Appinfo := 'Output local position';
X3DField144.Type := 'SFVec3f';
{ .AddX3DField }
X3DExternalPrototype140.X3DField := X3DField144;
X3DField145 := TX3DField.Create;
X3DField145.NameField := 'orientation_changed';
X3DField145.AccessType := 'outputOnly';
X3DField145.Appinfo := 'Output local orientation';
X3DField145.Type := 'SFRotation';
{ .AddX3DField }
X3DExternalPrototype140.X3DField := X3DField145;
X3DField146 := TX3DField.Create;
X3DField146.NameField := 'outputViewpointString';
X3DField146.AccessType := 'outputOnly';
X3DField146.Appinfo := 'MFString value of new Viewpoint';
X3DField146.Type := 'MFString';
{ .AddX3DField }
X3DExternalPrototype140.X3DField := X3DField146;
{ .AddX3DExternalPrototype }
Group20.X3DExternalPrototype := X3DExternalPrototype140;
X3DPrototype147 := TX3DPrototypeNode.Create;
X3DPrototype147.NameField := 'ViewPositionOrientation';
SFBool148 := TSFBool.Create(ViewPositionOrientation4, false, 'enabled', False);
SFBool148.NameField := 'enabled';
SFBool148.Value := 'false';
{ .SetSFBool }
X3DPrototype147.SFBool := SFBool148;
{ .AddX3DPrototype }
Group20.X3DPrototype := X3DPrototype147;
{ ==================== }
{ .AddGroup }
X3D0.AddChildren([Group20]);
Result := X3D0;
end;

begin
end.
