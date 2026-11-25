unit arc1;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createarc1: TX3DRootNode;

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
  Transform31: TTransformNode;
  ProtoInstance32: TX3DPrototypeNode;
  Transform33: TTransformNode;
  ProtoInstance34: TX3DPrototypeNode;
  Transform35: TTransformNode;
  Transform36: TTransformNode;
  Shape37: TShapeNode;
  Appearance38: TAppearanceNode;
  Material39: TMaterialNode;
  Cylinder40: TCylinderNode;
  ProtoDeclare41: TX3DPrototype;
  FieldDecl43: TX3DInterfaceDeclaration;
  FieldVal43: TSFNode;
  FieldDecl44: TX3DInterfaceDeclaration;
  FieldVal44: TSFNode;
  FieldDecl45: TX3DInterfaceDeclaration;
  FieldVal45: TSFNode;
  FieldDecl46: TX3DInterfaceDeclaration;
  FieldVal46: TSFNode;
  FieldDecl47: TX3DInterfaceDeclaration;
  FieldVal47: TX3DEvent;
  FieldDecl48: TX3DInterfaceDeclaration;
  FieldVal48: TX3DEvent;
  Script50: TScriptNode;
  FieldVal51: TSFNode;
  FieldVal52: TSFNode;
  FieldVal53: TSFNode;
  FieldVal54: TSFNode;
  FieldVal55: TX3DEvent;
  FieldVal56: TX3DEvent;
  ProtoInstance57: TX3DPrototypeNode;

procedure Initarc1Part0;
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

procedure Initarc1Part1;
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
  '               function set_location(value) {' + LineEnding +
  '                    old = translation;' + LineEnding +
  '                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);' + LineEnding +
  '                    keyValue = new MFVec3f([old, translation]);' + LineEnding +
  '               }');
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
{ ROUTE MB1.translation_changed TO node.set_translation }
Transform14.AddRoute(Script20.EventTranslation_changed, Transform14.FdTranslation.EventIn);
ProtoDeclare10.Node.AddChildren([Transform14]);
X3D0.AddPrototype(ProtoDeclare10);
Transform31 := TTransformNode.Create;
Transform31.X3DName := 'G1';
ProtoInstance32 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare10);
Transform31.FdChildren.Add(ProtoInstance32.Instantiate);
Group7.FdChildren.Add(Transform31);
Transform33 := TTransformNode.Create;
Transform33.X3DName := 'G2';
ProtoInstance34 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare10);
Transform33.FdChildren.Add(ProtoInstance34.Instantiate);
end;

procedure Initarc1Part2;
begin
Group7.FdChildren.Add(Transform33);
Transform35 := TTransformNode.Create;
Transform35.X3DName := 'transC1';
Transform36 := TTransformNode.Create;
Transform36.X3DName := 'rotscaleC1';
Shape37 := TShapeNode.Create;
Appearance38 := TAppearanceNode.Create;
Material39 := TMaterialNode.Create;
Material39.DiffuseColor := Vector3(0.2, 0.7, 0.7);
Material39.Transparency := 0.5;
Appearance38.Material := Material39;
Shape37.Appearance := Appearance38;
Cylinder40 := TCylinderNode.Create;
Cylinder40.Radius := 0.05;
Shape37.Geometry := Cylinder40;
Transform36.FdChildren.Add(Shape37);
Transform35.FdChildren.Add(Transform36);
Group7.FdChildren.Add(Transform35);
ProtoDeclare41 := CreateEmptyPrototype('x3dconnector');
ProtoDeclare41.X3DName := 'x3dconnector';
FieldVal43 := TSFNode.CreateUndefined(nil, False, 'startnode');
FieldDecl43 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl43.FieldOrEvent := FieldVal43;
FieldVal43.ParentInterfaceDeclaration := FieldDecl43;
ProtoDeclare41.InterfaceDeclarations.Add(FieldDecl43);
FieldVal44 := TSFNode.CreateUndefined(nil, False, 'endnode');
FieldDecl44 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl44.FieldOrEvent := FieldVal44;
FieldVal44.ParentInterfaceDeclaration := FieldDecl44;
ProtoDeclare41.InterfaceDeclarations.Add(FieldDecl44);
FieldVal45 := TSFNode.CreateUndefined(nil, True, 'transnode');
FieldDecl45 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl45.FieldOrEvent := FieldVal45;
FieldVal45.ParentInterfaceDeclaration := FieldDecl45;
ProtoDeclare41.InterfaceDeclarations.Add(FieldDecl45);
FieldVal46 := TSFNode.CreateUndefined(nil, True, 'rotscalenode');
FieldDecl46 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl46.FieldOrEvent := FieldVal46;
FieldVal46.ParentInterfaceDeclaration := FieldDecl46;
ProtoDeclare41.InterfaceDeclarations.Add(FieldDecl46);
end;

procedure Initarc1Part3;
begin
FieldVal47 := TSFVec3f.CreateEvent(nil, 'set_startpoint', True);
FieldDecl47 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl47.FieldOrEvent := FieldVal47;
FieldVal47.ParentInterfaceDeclaration := FieldDecl47;
ProtoDeclare41.InterfaceDeclarations.Add(FieldDecl47);
FieldVal48 := TSFVec3f.CreateEvent(nil, 'set_endpoint', True);
FieldDecl48 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl48.FieldOrEvent := FieldVal48;
FieldVal48.ParentInterfaceDeclaration := FieldDecl48;
ProtoDeclare41.InterfaceDeclarations.Add(FieldDecl48);
Script50 := TScriptNode.Create;
Script50.X3DName := 'S1';
FieldVal51 := TSFNode.CreateUndefined(Script50, False, 'startnode');
Script50.AddCustomFieldOrEvent(FieldVal51);
FieldVal52 := TSFNode.CreateUndefined(Script50, False, 'endnode');
Script50.AddCustomFieldOrEvent(FieldVal52);
FieldVal53 := TSFNode.CreateUndefined(Script50, False, 'transnode');
Script50.AddCustomFieldOrEvent(FieldVal53);
FieldVal54 := TSFNode.CreateUndefined(Script50, False, 'rotscalenode');
Script50.AddCustomFieldOrEvent(FieldVal54);
FieldVal55 := TSFVec3f.CreateEvent(Script50, 'set_startpoint', True);
Script50.AddCustomFieldOrEvent(FieldVal55);
FieldVal56 := TSFVec3f.CreateEvent(Script50, 'set_endpoint', True);
Script50.AddCustomFieldOrEvent(FieldVal56);
Script50.FieldOrEvent('startnode', True).IsClauseNamesAdd('startnode');
Script50.FieldOrEvent('endnode', True).IsClauseNamesAdd('endnode');
Script50.FieldOrEvent('transnode', True).IsClauseNamesAdd('transnode');
Script50.FieldOrEvent('rotscalenode', True).IsClauseNamesAdd('rotscalenode');
Script50.FieldOrEvent('set_startpoint', True).IsClauseNamesAdd('set_startpoint');
Script50.FieldOrEvent('set_endpoint', True).IsClauseNamesAdd('set_endpoint');
Script50.SetSourceCode('ecmascript:' + LineEnding +
  '        function recompute(startpoint,endpoint){' + LineEnding +
  '	    if (typeof endpoint === ''undefined'') {\n		return;\n	    }\n            var dif = endpoint.subtract(startpoint);\n            var dist = dif.length()*0.5;\n            var dif2 = dif.multiply(0.5);\n            var norm = dif.normalize();\n            var transl = startpoint.add(dif2);\n	    if (typeof Quaternion !== ''undefined'') {' + LineEnding +
  '		    return {' + LineEnding +
  '			    scale : new SFVec3f(1.0,dist,1.0),' + LineEnding +
  '			    translation : transl,' + LineEnding +
  '			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)' + LineEnding +
  '		    };' + LineEnding +
  '	    } else {' + LineEnding +
  '		    return {' + LineEnding +
  '			    scale : new SFVec3f(1.0,dist,1.0),' + LineEnding +
  '			    translation : transl,' + LineEnding +
  '			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)' + LineEnding +
  '		    };' + LineEnding +
  '	    }' + LineEnding +
  '	}' + LineEnding +
  '	function recompute_and_route(startpoint, endpoint) {' + LineEnding +
  '	      var trafo = recompute(startpoint, endpoint);' + LineEnding +
  '	      if (trafo) {' + LineEnding +
  '		      transnode.translation = trafo.translation;' + LineEnding +
  '		      rotscalenode.rotation = trafo.rotation;' + LineEnding +
  '		      rotscalenode.scale = trafo.scale;' + LineEnding +
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
ProtoDeclare41.Node.AddChildren([Script50]);
X3D0.AddPrototype(ProtoDeclare41);
ProtoInstance57 := TX3DPrototypeNode.CreatePrototypeNode('', '', ProtoDeclare41);
ProtoInstance57.X3DName := 'connector1';
(ProtoInstance57.Field('startnode') as TSFNode).Value := Transform31;
(ProtoInstance57.Field('endnode') as TSFNode).Value := Transform33;
(ProtoInstance57.Field('transnode') as TSFNode).Value := Transform35;
(ProtoInstance57.Field('rotscalenode') as TSFNode).Value := Transform36;
Group7.FdChildren.Add(ProtoInstance57.Instantiate);
end;

procedure Initarc1Part4;
begin
{ ROUTE G1.translation_changed TO connector1.set_startpoint }
Group7.AddRoute(Transform31.EventTranslation_changed, ProtoInstance57.EventSet_startpoint);
{ ROUTE G2.translation_changed TO connector1.set_endpoint }
Group7.AddRoute(Transform33.EventTranslation_changed, ProtoInstance57.EventSet_endpoint);
X3D0.AddChildren([Group7]);
end;

function Createarc1: TX3DRootNode;
begin
  Initarc1Part0;
  Initarc1Part1;
  Initarc1Part2;
  Initarc1Part3;
  Initarc1Part4;
  Result := X3D0;
end;

begin
end.
