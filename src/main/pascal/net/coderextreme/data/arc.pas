unit arc;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createarc: TX3DRootNode;

implementation

uses Classes, SysUtils, X3DLoad, CastleVectors;

function CreateEmptyPrototype(const AName: String): TX3DPrototype;
var
  Stream: TStringStream;
  TempRoot: TX3DRootNode;
  CopyState: TX3DNodeDeepCopyState;
begin
  Stream := TStringStream.Create('#X3D V4.0 utf8' + LineEnding + 'PROTO ' + AName + ' [] {}');
  try
    TempRoot := LoadNode(Stream, '', 'model/x3d+vrml');
    try
      CopyState := TX3DNodeDeepCopyState.Create;
      try
        Result := TempRoot.Prototypes[0].DeepCopy(CopyState) as TX3DPrototype;
      finally
        FreeAndNil(CopyState);
      end;
    finally
      FreeAndNil(TempRoot);
    end;
  finally
    FreeAndNil(Stream);
  end;
end;

var
  X3D0: TX3DRootNode;
  Group7: TGroupNode;
  Viewpoint8: TViewpointNode;
  Background9: TBackgroundNode;
  ProtoDeclare10: TX3DPrototype;
  FieldDecl12: TX3DInterfaceDeclaration;
  FieldVal12: TSFVec3f;
  Transform14: TTransformNode;
  Shape15: TShapeNode;
  Sphere16: TSphereNode;
  Appearance17: TAppearanceNode;
  Material18: TMaterialNode;
  PositionInterpolator19: TPositionInterpolatorNode;
  Script20: TScriptNode;
  FieldVal21: TSFVec3f;
  FieldVal22: TSFVec3f;
  FieldVal23: TX3DEvent;
  FieldVal24: TMFVec3f;
  TimeSensor25: TTimeSensorNode;
  ProtoDeclare30: TX3DPrototype;
  FieldDecl32: TX3DInterfaceDeclaration;
  FieldVal32: TSFNode;
  FieldDecl33: TX3DInterfaceDeclaration;
  FieldVal33: TSFNode;
  FieldDecl34: TX3DInterfaceDeclaration;
  FieldVal34: TX3DEvent;
  FieldDecl35: TX3DInterfaceDeclaration;
  FieldVal35: TX3DEvent;
  Group37: TGroupNode;
  Transform38: TTransformNode;
  Transform39: TTransformNode;
  Shape40: TShapeNode;
  Appearance41: TAppearanceNode;
  Material42: TMaterialNode;
  Cylinder43: TCylinderNode;
  Script44: TScriptNode;
  FieldVal45: TSFNode;
  FieldVal46: TSFNode;
  FieldVal47: TSFNode;
  FieldVal49: TSFNode;
  FieldVal51: TX3DEvent;
  FieldVal52: TX3DEvent;
  ProtoInstance53: TX3DPrototypeNode;
  ProtoInstance54: TX3DPrototypeNode;
  ProtoInstance55: TX3DPrototypeNode;
  ProtoInstance56: TX3DPrototypeNode;
  ProtoInstance57: TX3DPrototypeNode;
  ProtoInstance64: TX3DPrototypeNode;
  ProtoInstance71: TX3DPrototypeNode;

procedure InitarcPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'arc.x3d';
X3D0.Meta['creator'] := 'Lost, Doug Sanden I think';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/arc.x3d';
X3D0.Meta['description'] := 'a generic proto to connect two objects';
Group7 := TGroupNode.Create;
Viewpoint8 := TViewpointNode.Create;
Viewpoint8.Position := Vector3(0, 0, 5);
Viewpoint8.Description := 'Only Viewpoint';
Group7.FdChildren.Add(Viewpoint8);
Background9 := TBackgroundNode.Create;
Background9.SetSkyColor([Vector3(0.4, 0.4, 0.4)]);
Group7.FdChildren.Add(Background9);
ProtoDeclare10 := CreateEmptyPrototype('point');
ProtoDeclare10.X3DName := 'point';
FieldVal12 := TSFVec3f.Create(nil, True, 'translation', Vector3(0, 0, 0));
FieldDecl12 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl12.FieldOrEvent := FieldVal12;
FieldVal12.ParentInterfaceDeclaration := FieldDecl12;
ProtoDeclare10.InterfaceDeclarations.Add(FieldDecl12);
Transform14 := TTransformNode.Create;
Transform14.X3DName := 'node';
Transform14.FieldOrEvent('translation', True).IsClauseNamesAdd('translation');
Shape15 := TShapeNode.Create;
Sphere16 := TSphereNode.Create;
Sphere16.Radius := 0.1;
Shape15.Geometry := Sphere16;
Appearance17 := TAppearanceNode.Create;
Material18 := TMaterialNode.Create;
Material18.DiffuseColor := Vector3(1, 0, 0);
Appearance17.Material := Material18;
Shape15.Appearance := Appearance17;
Transform14.FdChildren.Add(Shape15);
PositionInterpolator19 := TPositionInterpolatorNode.Create;
PositionInterpolator19.X3DName := 'PI1';
PositionInterpolator19.SetKey([0, 1]);
end;

procedure InitarcPart1;
begin
PositionInterpolator19.SetKeyValue([Vector3(0, 0, 0), Vector3(0, 5, 0)]);
Transform14.FdChildren.Add(PositionInterpolator19);
Script20 := TScriptNode.Create;
Script20.X3DName := 'MB1';
FieldVal21 := TSFVec3f.Create(Script20, True, 'translation', Vector3(50, 50, 0));
Script20.AddCustomFieldOrEvent(FieldVal21);
FieldVal22 := TSFVec3f.Create(Script20, True, 'old', Vector3(0, 0, 0));
Script20.AddCustomFieldOrEvent(FieldVal22);
FieldVal23 := TSFTime.CreateEvent(Script20, 'set_location', True);
Script20.AddCustomFieldOrEvent(FieldVal23);
FieldVal24 := TMFVec3f.Create(Script20, True, 'keyValue', ([Vector3(0, 0, 0), Vector3(0, 5, 0)]));
Script20.AddCustomFieldOrEvent(FieldVal24);
Script20.SetSourceCode('ecmascript:' + LineEnding +
  '		function set_location(value) {' + LineEnding +
  '                    old = translation;' + LineEnding +
  '		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);' + LineEnding +
  '                    keyValue = new MFVec3f([old, translation]);' + LineEnding +
  '		    // Browser.println(keyValue);' + LineEnding +
  '		}');
Transform14.FdChildren.Add(Script20);
TimeSensor25 := TTimeSensorNode.Create;
TimeSensor25.X3DName := 'CL1';
TimeSensor25.CycleInterval := 3;
TimeSensor25.Loop := True;
Transform14.FdChildren.Add(TimeSensor25);
{ ROUTE CL1.cycleTime TO MB1.set_location }
Transform14.AddRoute(TimeSensor25.EventCycleTime, FieldVal23);
{ ROUTE CL1.fraction_changed TO PI1.set_fraction }
Transform14.AddRoute(TimeSensor25.EventFraction_changed, PositionInterpolator19.EventSet_fraction);
{ ROUTE MB1.keyValue TO PI1.keyValue }
Transform14.AddRoute(FieldVal24, PositionInterpolator19.keyValue);
{ ROUTE PI1.value_changed TO node.set_translation }
Transform14.AddRoute(PositionInterpolator19.EventValue_changed, Transform14.FdTranslation.EventIn);
ProtoDeclare10.Node.AddChildren([Transform14]);
X3D0.AddPrototype(ProtoDeclare10);
ProtoDeclare30 := CreateEmptyPrototype('x3dconnector');
ProtoDeclare30.X3DName := 'x3dconnector';
FieldVal32 := TSFNode.CreateUndefined(nil, False, 'startnode');
FieldDecl32 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl32.FieldOrEvent := FieldVal32;
FieldVal32.ParentInterfaceDeclaration := FieldDecl32;
ProtoDeclare30.InterfaceDeclarations.Add(FieldDecl32);
FieldVal33 := TSFNode.CreateUndefined(nil, False, 'endnode');
FieldDecl33 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl33.FieldOrEvent := FieldVal33;
FieldVal33.ParentInterfaceDeclaration := FieldDecl33;
end;

procedure InitarcPart2;
begin
ProtoDeclare30.InterfaceDeclarations.Add(FieldDecl33);
FieldVal34 := TSFVec3f.CreateEvent(nil, 'set_startpoint', True);
FieldDecl34 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl34.FieldOrEvent := FieldVal34;
FieldVal34.ParentInterfaceDeclaration := FieldDecl34;
ProtoDeclare30.InterfaceDeclarations.Add(FieldDecl34);
FieldVal35 := TSFVec3f.CreateEvent(nil, 'set_endpoint', True);
FieldDecl35 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl35.FieldOrEvent := FieldVal35;
FieldVal35.ParentInterfaceDeclaration := FieldDecl35;
ProtoDeclare30.InterfaceDeclarations.Add(FieldDecl35);
Group37 := TGroupNode.Create;
Transform38 := TTransformNode.Create;
Transform38.X3DName := 'trans';
Transform39 := TTransformNode.Create;
Transform39.X3DName := 'rotscale';
Shape40 := TShapeNode.Create;
Appearance41 := TAppearanceNode.Create;
Material42 := TMaterialNode.Create;
Material42.DiffuseColor := Vector3(0.2, 0.7, 0.7);
Material42.Transparency := 0.5;
Appearance41.Material := Material42;
Shape40.Appearance := Appearance41;
Cylinder43 := TCylinderNode.Create;
Cylinder43.Radius := 0.05;
Shape40.Geometry := Cylinder43;
Transform39.FdChildren.Add(Shape40);
Transform38.FdChildren.Add(Transform39);
Group37.FdChildren.Add(Transform38);
Script44 := TScriptNode.Create;
Script44.X3DName := 'S1';
FieldVal45 := TSFNode.CreateUndefined(Script44, False, 'startnode');
Script44.AddCustomFieldOrEvent(FieldVal45);
FieldVal46 := TSFNode.CreateUndefined(Script44, False, 'endnode');
Script44.AddCustomFieldOrEvent(FieldVal46);
FieldVal47 := TSFNode.CreateUndefined(Script44, True, 'position');
Script44.AddCustomFieldOrEvent(FieldVal47);
FieldVal47.Value := Transform38;
FieldVal49 := TSFNode.CreateUndefined(Script44, True, 'rotscale');
Script44.AddCustomFieldOrEvent(FieldVal49);
end;

procedure InitarcPart3;
begin
FieldVal49.Value := Transform39;
FieldVal51 := TSFVec3f.CreateEvent(Script44, 'set_startpoint', True);
Script44.AddCustomFieldOrEvent(FieldVal51);
FieldVal52 := TSFVec3f.CreateEvent(Script44, 'set_endpoint', True);
Script44.AddCustomFieldOrEvent(FieldVal52);
Script44.FieldOrEvent('startnode', True).IsClauseNamesAdd('startnode');
Script44.FieldOrEvent('endnode', True).IsClauseNamesAdd('endnode');
Script44.FieldOrEvent('set_startpoint', True).IsClauseNamesAdd('set_startpoint');
Script44.FieldOrEvent('set_endpoint', True).IsClauseNamesAdd('set_endpoint');
Script44.SetSourceCode('ecmascript:' + LineEnding +
  '        function recompute(startpoint,endpoint){' + LineEnding +
  '	    if (typeof endpoint === ''undefined'') {\n		return;\n	    }\n            var dif = endpoint.subtract(startpoint);\n            var dist = dif.length()*0.5;\n            var dif2 = dif.multiply(0.5);\n            var norm = dif.normalize();\n            var transl = startpoint.add(dif2);\n	    if (typeof Quaternion !== ''undefined'') {\n		    return {\n			    scale : new SFVec3f(1.0,dist,1.0),\n			    translation : transl,\n			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)\n		    };\n	    } else if (typeof SFRotation !== ''undefined'') {' + LineEnding +
  '		    return {' + LineEnding +
  '			    scale : new SFVec3f(1.0,dist,1.0),' + LineEnding +
  '			    translation : transl,' + LineEnding +
  '			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)' + LineEnding +
  '		    };' + LineEnding +
  '	    } else {' + LineEnding +
  '		    return {' + LineEnding +
  '			    scale : new SFVec3f(1.0,dist,1.0),' + LineEnding +
  '			    translation : transl' + LineEnding +
  '		    };' + LineEnding +
  '	    }' + LineEnding +
  '	}' + LineEnding +
  '	function recompute_and_route(startpoint, endpoint) {' + LineEnding +
  '	      var trafo = recompute(startpoint, endpoint);' + LineEnding +
  '	      if (trafo) {' + LineEnding +
  '		      position.translation = trafo.translation;' + LineEnding +
  '		      rotscale.rotation = trafo.rotation;' + LineEnding +
  '		      rotscale.scale = trafo.scale;' + LineEnding +
  '	      }' + LineEnding +
  '	}' + LineEnding +
  '        function initialize(){' + LineEnding +
  '            recompute_and_route(startnode.translation,endnode.translation);' + LineEnding +
  '        }' + LineEnding +
  '        function set_startpoint(val,t){' + LineEnding +
  '            recompute_and_route(val,endnode.translation);' + LineEnding +
  '        }' + LineEnding +
  '        function set_endpoint(val,t){' + LineEnding +
  '            recompute_and_route(startnode.translation,val);' + LineEnding +
  '        }');
Group37.FdChildren.Add(Script44);
ProtoDeclare30.Node.AddChildren([Group37]);
X3D0.AddPrototype(ProtoDeclare30);
ProtoInstance53 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare10);
ProtoInstance53.X3DName := 'G1';
Group7.FdChildren.Add(ProtoInstance53.Instantiate);
ProtoInstance54 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare10);
ProtoInstance54.X3DName := 'G2';
Group7.FdChildren.Add(ProtoInstance54.Instantiate);
ProtoInstance55 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare10);
ProtoInstance55.X3DName := 'G3';
Group7.FdChildren.Add(ProtoInstance55.Instantiate);
ProtoInstance56 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare10);
ProtoInstance56.X3DName := 'G4';
Group7.FdChildren.Add(ProtoInstance56.Instantiate);
ProtoInstance57 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare30);
ProtoInstance57.X3DName := 'connector1';
(ProtoInstance57.Field('startnode') as TSFNode).Value := ProtoInstance53;
(ProtoInstance57.Field('endnode') as TSFNode).Value := ProtoInstance54;
Group7.FdChildren.Add(ProtoInstance57.Instantiate);
ProtoInstance64 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare30);
ProtoInstance64.X3DName := 'connector2';
(ProtoInstance64.Field('startnode') as TSFNode).Value := ProtoInstance53;
(ProtoInstance64.Field('endnode') as TSFNode).Value := ProtoInstance55;
Group7.FdChildren.Add(ProtoInstance64.Instantiate);
ProtoInstance71 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare30);
ProtoInstance71.X3DName := 'connector3';
(ProtoInstance71.Field('startnode') as TSFNode).Value := ProtoInstance53;
(ProtoInstance71.Field('endnode') as TSFNode).Value := ProtoInstance56;
Group7.FdChildren.Add(ProtoInstance71.Instantiate);
end;

procedure InitarcPart4;
begin
{ ROUTE G1.translation TO connector1.set_startpoint }
Group7.AddRoute(ProtoInstance53.EventTranslation, ProtoInstance57.EventSet_startpoint);
{ ROUTE G2.translation TO connector1.set_endpoint }
Group7.AddRoute(ProtoInstance54.EventTranslation, ProtoInstance57.EventSet_endpoint);
{ ROUTE G1.translation TO connector2.set_startpoint }
Group7.AddRoute(ProtoInstance53.EventTranslation, ProtoInstance64.EventSet_startpoint);
{ ROUTE G3.translation TO connector2.set_endpoint }
Group7.AddRoute(ProtoInstance55.EventTranslation, ProtoInstance64.EventSet_endpoint);
{ ROUTE G1.translation TO connector3.set_startpoint }
Group7.AddRoute(ProtoInstance53.EventTranslation, ProtoInstance71.EventSet_startpoint);
{ ROUTE G4.translation TO connector3.set_endpoint }
Group7.AddRoute(ProtoInstance56.EventTranslation, ProtoInstance71.EventSet_endpoint);
X3D0.AddChildren([Group7]);
end;

function Createarc: TX3DRootNode;
begin
  InitarcPart0;
  InitarcPart1;
  InitarcPart2;
  InitarcPart3;
  InitarcPart4;
  Result := X3D0;
end;

begin
end.
