unit arc1;

interface

uses X3DNodes;

function Createarc1: TX3DRootNode;

implementation

uses CastleVectors;

function Createarc1: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group7: TGroupNode;
Viewpoint8: TViewpointNode;
Background9: TBackgroundNode;
X3DPrototype10: TX3DPrototype;
X3DInterfaceDeclaration11: TX3DInterfaceDeclaration;
X3DField12: TX3DField;
X3DPrototype13: TX3DPrototype;
Transform14: TTransformNode;
IS15: TIS;
connect16: Tconnect;
Shape17: TShapeNode;
Sphere18: TSphereNode;
Appearance19: TAppearanceNode;
Material20: TMaterialNode;
PositionInterpolator21: TPositionInterpolatorNode;
Script22: TScriptNode;
X3DField23: TX3DField;
X3DField24: TX3DField;
X3DField25: TX3DField;
X3DField26: TX3DField;
TimeSensor27: TTimeSensorNode;
Transform33: TTransformNode;
X3DPrototype34: TX3DPrototypeNode;
Transform35: TTransformNode;
X3DPrototype36: TX3DPrototypeNode;
Transform37: TTransformNode;
Transform38: TTransformNode;
Shape39: TShapeNode;
Appearance40: TAppearanceNode;
Material41: TMaterialNode;
Cylinder42: TCylinderNode;
X3DPrototype43: TX3DPrototype;
X3DInterfaceDeclaration44: TX3DInterfaceDeclaration;
X3DField45: TX3DField;
X3DField46: TX3DField;
X3DField47: TX3DField;
X3DField48: TX3DField;
X3DField49: TX3DField;
X3DField50: TX3DField;
X3DPrototype51: TX3DPrototype;
Script52: TScriptNode;
X3DField53: TX3DField;
X3DField54: TX3DField;
X3DField55: TX3DField;
X3DField56: TX3DField;
X3DField57: TX3DField;
X3DField58: TX3DField;
IS59: TIS;
connect60: Tconnect;
connect61: Tconnect;
connect62: Tconnect;
connect63: Tconnect;
connect64: Tconnect;
connect65: Tconnect;
X3DPrototype66: TX3DPrototypeNode;
SFNode67: TSFNode;
Transform68: TTransformNode;
SFNode69: TSFNode;
Transform70: TTransformNode;
SFNode71: TSFNode;
Transform72: TTransformNode;
SFNode73: TSFNode;
Transform74: TTransformNode;
SFVec3f75: TSFVec3f;
SFVec3f76: TSFVec3f;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'arc1.x3d';
X3D0.Meta['creator'] := 'Lost, Doug Sanden I think';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d';
X3D0.Meta['description'] := 'a generic proto to connect two objects';
Group7 := TGroupNode.Create;
Viewpoint8 := TViewpointNode.Create;
Viewpoint8.Position := Vector3(0,0,5);
Viewpoint8.Description := 'Only Viewpoint';
{ .AddChildren }
Group7.AddChildren([Viewpoint8]);
Background9 := TBackgroundNode.Create;
Background9.SetSkyColor([Vector3(0.4,0.4,0.4)]);
{ .AddChildren }
Group7.AddChildren([Background9]);
X3DPrototype10 := TX3DPrototype.Create;
X3DPrototype10.NameField := 'point';
X3DInterfaceDeclaration11 := TX3DInterfaceDeclaration.Create(nil);
X3DField12 := TX3DField.Create;
X3DField12.NameField := 'translation';
X3DField12.AccessType := 'inputOutput';
X3DField12.Type := 'SFVec3f';
X3DField12.Value := '0 0 0';
{ .SetX3DField }
X3DInterfaceDeclaration11.X3DField := X3DField12;
{ .SetX3DInterfaceDeclaration }
X3DPrototype10.X3DInterfaceDeclaration := X3DInterfaceDeclaration11;
X3DPrototype13 := TX3DPrototype.Create;
Transform14 := TTransformNode.Create;
IS15 := TIS.Create;
connect16 := Tconnect.Create;
connect16.NodeField := 'translation';
connect16.ProtoField := 'translation';
{ .AddConnect }
IS15.Connect := connect16;
{ .SetIS }
Transform14.IS := IS15;
Shape17 := TShapeNode.Create;
Sphere18 := TSphereNode.Create;
Sphere18.Radius := 0.1;
{ .SetGeometry }
Shape17.Geometry := Sphere18;
Appearance19 := TAppearanceNode.Create;
Material20 := TMaterialNode.Create;
Material20.DiffuseColor := Vector3(1,0,0);
{ .SetMaterial }
Appearance19.Material := Material20;
{ .SetAppearance }
Shape17.Appearance := Appearance19;
{ .AddChild }
Transform14.AddChildren([Shape17]);
PositionInterpolator21 := TPositionInterpolatorNode.Create;
PositionInterpolator21.SetKey([0,1]);
PositionInterpolator21.SetKeyValue([Vector3(0,0,0),Vector3(0,5,0)]);
{ .AddChildren }
Transform14.AddChildren([PositionInterpolator21]);
Script22 := TScriptNode.Create;
X3DField23 := TX3DField.Create;
X3DField23.NameField := 'translation';
X3DField23.AccessType := 'inputOutput';
X3DField23.Type := 'SFVec3f';
X3DField23.Value := '50 50 0';
{ .SetX3DField }
Script22.X3DField := X3DField23;
X3DField24 := TX3DField.Create;
X3DField24.NameField := 'old';
X3DField24.AccessType := 'inputOutput';
X3DField24.Type := 'SFVec3f';
X3DField24.Value := '0 0 0';
{ .AddX3DField }
Script22.X3DField := X3DField24;
X3DField25 := TX3DField.Create;
X3DField25.NameField := 'set_location';
X3DField25.AccessType := 'inputOnly';
X3DField25.Type := 'SFTime';
{ .AddX3DField }
Script22.X3DField := X3DField25;
X3DField26 := TX3DField.Create;
X3DField26.NameField := 'keyValue';
X3DField26.AccessType := 'inputOutput';
X3DField26.Type := 'MFVec3f';
X3DField26.Value := '0 0 0 0 5 0';
{ .AddX3DField }
Script22.X3DField := X3DField26;

Script22.SetSourceCode('''ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"               }''');
{ .AddChildren }
Transform14.AddChildren([Script22]);
TimeSensor27 := TTimeSensorNode.Create;
TimeSensor27.CycleInterval := 3;
TimeSensor27.Loop := True;
{ .AddChildren }
Transform14.AddChildren([TimeSensor27]);
Transform14.AddRoute(TimeSensor27.FdCycletime, Script22.EventSet_location);
{ .AddX3DRoute }
Transform14.AddRoute(TimeSensor27.EventFraction_changed, PositionInterpolator21.EventSet_fraction);
{ .AddX3DRoute }
Transform14.AddRoute(Script22.FdKeyvalue, PositionInterpolator21.FdKeyvalue);
{ .AddX3DRoute }
Transform14.AddRoute(PositionInterpolator21.EventValue_changed, Transform14.FdTranslation);
{ .AddX3DRoute }
Transform14.AddRoute(Script22.EventTranslation_changed, Transform14.FdTranslation);
{ .AddX3DRoute }
{ .SetTransform }
X3DPrototype13.Transform := Transform14;
{ .AddX3DPrototype }
X3DPrototype10.X3DPrototype := X3DPrototype13;
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype10;
Transform33 := TTransformNode.Create;
X3DPrototype34 := TX3DPrototypeNode.Create;
X3DPrototype34.NameField := 'point';
{ .SetX3DPrototype }
Transform33.X3DPrototype := X3DPrototype34;
{ .AddChildren }
Group7.AddChildren([Transform33]);
Transform35 := TTransformNode.Create;
X3DPrototype36 := TX3DPrototypeNode.Create;
X3DPrototype36.NameField := 'point';
{ .SetX3DPrototype }
Transform35.X3DPrototype := X3DPrototype36;
{ .AddChildren }
Group7.AddChildren([Transform35]);
Transform37 := TTransformNode.Create;
Transform38 := TTransformNode.Create;
Shape39 := TShapeNode.Create;
Appearance40 := TAppearanceNode.Create;
Material41 := TMaterialNode.Create;
Material41.DiffuseColor := Vector3(0.2,0.7,0.7);
Material41.Transparency := 0.5;
{ .SetMaterial }
Appearance40.Material := Material41;
{ .SetAppearance }
Shape39.Appearance := Appearance40;
Cylinder42 := TCylinderNode.Create;
Cylinder42.Radius := 0.05;
{ .SetGeometry }
Shape39.Geometry := Cylinder42;
{ .AddChild }
Transform38.AddChildren([Shape39]);
{ .AddChildren }
Transform37.AddChildren([Transform38]);
{ .AddChildren }
Group7.AddChildren([Transform37]);
X3DPrototype43 := TX3DPrototype.Create;
X3DPrototype43.NameField := 'x3dconnector';
X3DInterfaceDeclaration44 := TX3DInterfaceDeclaration.Create(nil);
X3DField45 := TX3DField.Create;
X3DField45.NameField := 'startnode';
X3DField45.AccessType := 'initializeOnly';
X3DField45.Type := 'SFNode';
{ .SetX3DField }
X3DInterfaceDeclaration44.X3DField := X3DField45;
X3DField46 := TX3DField.Create;
X3DField46.NameField := 'endnode';
X3DField46.AccessType := 'initializeOnly';
X3DField46.Type := 'SFNode';
{ .AddX3DField }
X3DInterfaceDeclaration44.X3DField := X3DField46;
X3DField47 := TX3DField.Create;
X3DField47.NameField := 'transnode';
X3DField47.AccessType := 'inputOutput';
X3DField47.Type := 'SFNode';
{ .AddX3DField }
X3DInterfaceDeclaration44.X3DField := X3DField47;
X3DField48 := TX3DField.Create;
X3DField48.NameField := 'rotscalenode';
X3DField48.AccessType := 'inputOutput';
X3DField48.Type := 'SFNode';
{ .AddX3DField }
X3DInterfaceDeclaration44.X3DField := X3DField48;
X3DField49 := TX3DField.Create;
X3DField49.NameField := 'set_startpoint';
X3DField49.AccessType := 'inputOnly';
X3DField49.Type := 'SFVec3f';
{ .AddX3DField }
X3DInterfaceDeclaration44.X3DField := X3DField49;
X3DField50 := TX3DField.Create;
X3DField50.NameField := 'set_endpoint';
X3DField50.AccessType := 'inputOnly';
X3DField50.Type := 'SFVec3f';
{ .AddX3DField }
X3DInterfaceDeclaration44.X3DField := X3DField50;
{ .SetX3DInterfaceDeclaration }
X3DPrototype43.X3DInterfaceDeclaration := X3DInterfaceDeclaration44;
X3DPrototype51 := TX3DPrototype.Create;
Script52 := TScriptNode.Create;
X3DField53 := TX3DField.Create;
X3DField53.NameField := 'startnode';
X3DField53.AccessType := 'initializeOnly';
X3DField53.Type := 'SFNode';
{ .SetX3DField }
Script52.X3DField := X3DField53;
X3DField54 := TX3DField.Create;
X3DField54.NameField := 'endnode';
X3DField54.AccessType := 'initializeOnly';
X3DField54.Type := 'SFNode';
{ .AddX3DField }
Script52.X3DField := X3DField54;
X3DField55 := TX3DField.Create;
X3DField55.NameField := 'transnode';
X3DField55.AccessType := 'initializeOnly';
X3DField55.Type := 'SFNode';
{ .AddX3DField }
Script52.X3DField := X3DField55;
X3DField56 := TX3DField.Create;
X3DField56.NameField := 'rotscalenode';
X3DField56.AccessType := 'initializeOnly';
X3DField56.Type := 'SFNode';
{ .AddX3DField }
Script52.X3DField := X3DField56;
X3DField57 := TX3DField.Create;
X3DField57.NameField := 'set_startpoint';
X3DField57.AccessType := 'inputOnly';
X3DField57.Type := 'SFVec3f';
{ .AddX3DField }
Script52.X3DField := X3DField57;
X3DField58 := TX3DField.Create;
X3DField58.NameField := 'set_endpoint';
X3DField58.AccessType := 'inputOnly';
X3DField58.Type := 'SFVec3f';
{ .AddX3DField }
Script52.X3DField := X3DField58;
IS59 := TIS.Create;
connect60 := Tconnect.Create;
connect60.NodeField := 'startnode';
connect60.ProtoField := 'startnode';
{ .AddConnect }
IS59.Connect := connect60;
connect61 := Tconnect.Create;
connect61.NodeField := 'endnode';
connect61.ProtoField := 'endnode';
{ .AddConnect }
IS59.Connect := connect61;
connect62 := Tconnect.Create;
connect62.NodeField := 'transnode';
connect62.ProtoField := 'transnode';
{ .AddConnect }
IS59.Connect := connect62;
connect63 := Tconnect.Create;
connect63.NodeField := 'rotscalenode';
connect63.ProtoField := 'rotscalenode';
{ .AddConnect }
IS59.Connect := connect63;
connect64 := Tconnect.Create;
connect64.NodeField := 'set_startpoint';
connect64.ProtoField := 'set_startpoint';
{ .AddConnect }
IS59.Connect := connect64;
connect65 := Tconnect.Create;
connect65.NodeField := 'set_endpoint';
connect65.ProtoField := 'set_endpoint';
{ .AddConnect }
IS59.Connect := connect65;
{ .SetIS }
Script52.IS := IS59;

Script52.SetSourceCode('''ecmascript:\n"+
"        function recompute(startpoint,endpoint){\n"+
"	    if (typeof endpoint === 'undefined') {\\n		return;\\n	    }\\n            var dif = endpoint.subtract(startpoint);\\n            var dist = dif.length()*0.5;\\n            var dif2 = dif.multiply(0.5);\\n            var norm = dif.normalize();\\n            var transl = startpoint.add(dif2);\\n	    if (typeof Quaternion !== 'undefined') {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)\n"+
"		    };\n"+
"	    } else {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)\n"+
"		    };\n"+
"	    }\n"+
"	}\n"+
"	function recompute_and_route(startpoint, endpoint) {\n"+
"	      var trafo = recompute(startpoint, endpoint);\n"+
"	      if (trafo) {\n"+
"		      transnode.translation = trafo.translation;\n"+
"		      rotscalenode.rotation = trafo.rotation;\n"+
"		      rotscalenode.scale = trafo.scale;\n"+
"	      }\n"+
"	}\n"+
"        function initialize(){\n"+
"            recompute_and_route(startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_startpoint(val,t){\n"+
"            recompute_and_route(val,endnode.translation);\n"+
"        }\n"+
"        function set_endpoint(val,t){\n"+
"            recompute_and_route(startnode.translation,val);\n"+
"        }''');
{ .SetScript }
X3DPrototype51.Script := Script52;
{ .AddX3DPrototype }
X3DPrototype43.X3DPrototype := X3DPrototype51;
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype43;
X3DPrototype66 := TX3DPrototypeNode.Create;
X3DPrototype66.NameField := 'x3dconnector';
SFNode67 := TSFNode.Create;
SFNode67.NameField := 'startnode';
Transform68 := Transform33;
{ .SetTransform }
SFNode67.Transform := Transform68;
{ .SetSFNode }
X3DPrototype66.SFNode := SFNode67;
SFNode69 := TSFNode.Create;
SFNode69.NameField := 'endnode';
Transform70 := Transform35;
{ .SetTransform }
SFNode69.Transform := Transform70;
{ .AddSFNode }
X3DPrototype66.SFNode := SFNode69;
SFNode71 := TSFNode.Create;
SFNode71.NameField := 'transnode';
Transform72 := Transform37;
{ .SetTransform }
SFNode71.Transform := Transform72;
{ .AddSFNode }
X3DPrototype66.SFNode := SFNode71;
SFNode73 := TSFNode.Create;
SFNode73.NameField := 'rotscalenode';
Transform74 := Transform38;
{ .SetTransform }
SFNode73.Transform := Transform74;
{ .AddSFNode }
X3DPrototype66.SFNode := SFNode73;
SFVec3f75 := TSFVec3f.Create(x3dconnector2, false, 'set_startpoint', Vector3(0, 0, 0); { null });
SFVec3f75.NameField := 'set_startpoint';
{ .AddSFVec3f }
X3DPrototype66.SFVec3f := SFVec3f75;
SFVec3f76 := TSFVec3f.Create(x3dconnector2, false, 'set_endpoint', Vector3(0, 0, 0); { null });
SFVec3f76.NameField := 'set_endpoint';
{ .AddSFVec3f }
X3DPrototype66.SFVec3f := SFVec3f76;
{ .AddX3DPrototype }
Group7.X3DPrototype := X3DPrototype66;
Group7.AddRoute(Transform33.EventTranslation_changed, X3DPrototype66.EventSet_startpoint);
{ .AddX3DRoute }
Group7.AddRoute(Transform35.EventTranslation_changed, X3DPrototype66.EventSet_endpoint);
{ .AddX3DRoute }
{ .AddGroup }
X3D0.AddChildren([Group7]);
Result := X3D0;
end;

begin
end.
