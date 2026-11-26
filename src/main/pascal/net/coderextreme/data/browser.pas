unit browser;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported, CastleSceneCore;

function Createbrowser: TX3DRootNode;
procedure RegisterbrowserScripts(const Scene: TCastleSceneCore);

implementation

uses SysUtils, CastleVectors, Math, X3DTime;

type
  TScript8Script = class
  private
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create;
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Initialize(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript9Script = class
  private
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create;
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Cumulustranslation(const Time: TX3DTime);
  end;

var
  X3D0: TX3DRootNode;
  Group7: TGroupNode;
  Script8: TScriptNode;
  CompiledScript8: TScript8Script;
  Script9: TScriptNode;
  CompiledScript9: TScript9Script;

constructor TScript8Script.Create;
begin
  inherited Create;
end;

destructor TScript8Script.Destroy;
begin
  inherited Destroy;
end;

procedure TScript8Script.FlushOutputs(const Time: TX3DTime);
begin
end;

procedure TScript8Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script8_initialize', {$ifdef FPC}@{$endif}Initialize);
end;

procedure TScript8Script.Initialize(Value: TX3DField; const Time: TX3DTime);
begin
  WriteLn('DUDES'#10 + '"DUDETTES');
end;

constructor TScript9Script.Create;
begin
  inherited Create;
end;

destructor TScript9Script.Destroy;
begin
  inherited Destroy;
end;

procedure TScript9Script.FlushOutputs(const Time: TX3DTime);
begin
end;

procedure TScript9Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
end;

procedure TScript9Script.Cumulustranslation(const Time: TX3DTime);
var
  xxx: String;
begin
  xxx := ' ' + ' ' + #9'Transform'#9#9#10 + '    ' + '               '#9#10;
end;

procedure InitbrowserPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'browser.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/browser.x3d';
X3D0.Meta['description'] := 'a script test with embedded \n between single quotes, a double backslash \\\\ a backslash \\ and a closing quote "';
Group7 := TGroupNode.Create;
Script8 := TScriptNode.Create;
Script8.X3DName := 'Browser';
FreeAndNil(CompiledScript8);
CompiledScript8 := TScript8Script.Create;
Script8.SetUrl(['compiled:' + LineEnding +
  'initialize=Script8_initialize']);
Group7.FdChildren.Add(Script8);
Script9 := TScriptNode.Create;
Script9.X3DName := 'Clouds';
FreeAndNil(CompiledScript9);
CompiledScript9 := TScript9Script.Create;
Script9.SetUrl(['compiled:' + LineEnding +
  '']);
Group7.FdChildren.Add(Script9);
X3D0.AddChildren([Group7]);
end;

function Createbrowser: TX3DRootNode;
begin
  InitbrowserPart0;
  Result := X3D0;
end;

procedure RegisterbrowserScripts(const Scene: TCastleSceneCore);
begin
  if CompiledScript8 <> nil then
    CompiledScript8.RegisterHandlers(Scene);
  if CompiledScript9 <> nil then
    CompiledScript9.RegisterHandlers(Scene);
end;

finalization
  FreeAndNil(CompiledScript8);
  FreeAndNil(CompiledScript9);
end.
