unit MenuJin;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported, CastleSceneCore;

function CreateMenuJin: TX3DRootNode;
procedure RegisterMenuJinScripts(const Scene: TCastleSceneCore);

implementation

uses SysUtils, CastleVectors, Math, X3DTime;

type
  TScript10Script = class
  private
    Fchoice: Int32;
    FEvent_choice: TX3DEvent;
    FBack_choice: TSFInt32;
    FDirty_choice: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_choice: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_touchTime(const value: Single; const Time: TX3DTime);
    procedure TouchTime(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript15Script = class
  private
    Fchoice: Int32;
    FEvent_choice: TX3DEvent;
    FBack_choice: TSFInt32;
    FDirty_choice: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_choice: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_touchTime(const value: Single; const Time: TX3DTime);
    procedure TouchTime(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript20Script = class
  private
    Fchoice: Int32;
    FEvent_choice: TX3DEvent;
    FBack_choice: TSFInt32;
    FDirty_choice: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_choice: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_touchTime(const value: Single; const Time: TX3DTime);
    procedure TouchTime(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript25Script = class
  private
    Fchoice: Int32;
    FEvent_choice: TX3DEvent;
    FBack_choice: TSFInt32;
    FDirty_choice: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_choice: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_touchTime(const value: Single; const Time: TX3DTime);
    procedure TouchTime(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript30Script = class
  private
    Fchoice: Int32;
    FEvent_choice: TX3DEvent;
    FBack_choice: TSFInt32;
    FDirty_choice: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_choice: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_touchTime(const value: Single; const Time: TX3DTime);
    procedure TouchTime(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript35Script = class
  private
    Fchoice: Int32;
    FEvent_choice: TX3DEvent;
    FBack_choice: TSFInt32;
    FDirty_choice: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_choice: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_touchTime(const value: Single; const Time: TX3DTime);
    procedure TouchTime(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript40Script = class
  private
    Fchoice: Int32;
    FEvent_choice: TX3DEvent;
    FBack_choice: TSFInt32;
    FDirty_choice: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_choice: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_touchTime(const value: Single; const Time: TX3DTime);
    procedure TouchTime(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript45Script = class
  private
    Fchoice: Int32;
    FEvent_choice: TX3DEvent;
    FBack_choice: TSFInt32;
    FDirty_choice: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_choice: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_touchTime(const value: Single; const Time: TX3DTime);
    procedure TouchTime(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript50Script = class
  private
    Fchoice: Int32;
    FEvent_choice: TX3DEvent;
    FBack_choice: TSFInt32;
    FDirty_choice: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_choice: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_touchTime(const value: Single; const Time: TX3DTime);
    procedure TouchTime(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript55Script = class
  private
    Fchoice: Int32;
    FEvent_choice: TX3DEvent;
    FBack_choice: TSFInt32;
    FDirty_choice: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_choice: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_touchTime(const value: Single; const Time: TX3DTime);
    procedure TouchTime(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript60Script = class
  private
    Fchoice: Int32;
    FEvent_choice: TX3DEvent;
    FBack_choice: TSFInt32;
    FDirty_choice: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_choice: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_touchTime(const value: Single; const Time: TX3DTime);
    procedure TouchTime(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript65Script = class
  private
    Fchoice: Int32;
    FEvent_choice: TX3DEvent;
    FBack_choice: TSFInt32;
    FDirty_choice: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_choice: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_touchTime(const value: Single; const Time: TX3DTime);
    procedure TouchTime(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript70Script = class
  private
    Fchoice: Int32;
    FEvent_choice: TX3DEvent;
    FBack_choice: TSFInt32;
    FDirty_choice: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_choice: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_touchTime(const value: Single; const Time: TX3DTime);
    procedure TouchTime(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript75Script = class
  private
    Fchoice: Int32;
    FEvent_choice: TX3DEvent;
    FBack_choice: TSFInt32;
    FDirty_choice: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_choice: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_touchTime(const value: Single; const Time: TX3DTime);
    procedure TouchTime(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript80Script = class
  private
    Fchoice: Int32;
    FEvent_choice: TX3DEvent;
    FBack_choice: TSFInt32;
    FDirty_choice: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_choice: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_touchTime(const value: Single; const Time: TX3DTime);
    procedure TouchTime(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript85Script = class
  private
    Fchoice: Int32;
    FEvent_choice: TX3DEvent;
    FBack_choice: TSFInt32;
    FDirty_choice: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_choice: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_touchTime(const value: Single; const Time: TX3DTime);
    procedure TouchTime(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript90Script = class
  private
    Fchoice: Int32;
    FEvent_choice: TX3DEvent;
    FBack_choice: TSFInt32;
    FDirty_choice: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_choice: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_touchTime(const value: Single; const Time: TX3DTime);
    procedure TouchTime(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript95Script = class
  private
    Fchoice: Int32;
    FEvent_choice: TX3DEvent;
    FBack_choice: TSFInt32;
    FDirty_choice: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_choice: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_touchTime(const value: Single; const Time: TX3DTime);
    procedure TouchTime(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript100Script = class
  private
    Fchoice: Int32;
    FEvent_choice: TX3DEvent;
    FBack_choice: TSFInt32;
    FDirty_choice: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_choice: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_touchTime(const value: Single; const Time: TX3DTime);
    procedure TouchTime(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript105Script = class
  private
    Fchoice: Int32;
    FEvent_choice: TX3DEvent;
    FBack_choice: TSFInt32;
    FDirty_choice: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_choice: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_touchTime(const value: Single; const Time: TX3DTime);
    procedure TouchTime(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript110Script = class
  private
    Fchoice: Int32;
    FEvent_choice: TX3DEvent;
    FBack_choice: TSFInt32;
    FDirty_choice: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_choice: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_touchTime(const value: Single; const Time: TX3DTime);
    procedure TouchTime(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript115Script = class
  private
    Fchoice: Int32;
    FEvent_choice: TX3DEvent;
    FBack_choice: TSFInt32;
    FDirty_choice: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_choice: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_touchTime(const value: Single; const Time: TX3DTime);
    procedure TouchTime(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript120Script = class
  private
    Fchoice: Int32;
    FEvent_choice: TX3DEvent;
    FBack_choice: TSFInt32;
    FDirty_choice: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_choice: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_touchTime(const value: Single; const Time: TX3DTime);
    procedure TouchTime(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript125Script = class
  private
    Fchoice: Int32;
    FEvent_choice: TX3DEvent;
    FBack_choice: TSFInt32;
    FDirty_choice: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_choice: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_touchTime(const value: Single; const Time: TX3DTime);
    procedure TouchTime(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript130Script = class
  private
    Fchoice: Int32;
    FEvent_choice: TX3DEvent;
    FBack_choice: TSFInt32;
    FDirty_choice: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_choice: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_touchTime(const value: Single; const Time: TX3DTime);
    procedure TouchTime(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript135Script = class
  private
    Fchoice: Int32;
    FEvent_choice: TX3DEvent;
    FBack_choice: TSFInt32;
    FDirty_choice: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_choice: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_touchTime(const value: Single; const Time: TX3DTime);
    procedure TouchTime(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript140Script = class
  private
    Fchoice: Int32;
    FEvent_choice: TX3DEvent;
    FBack_choice: TSFInt32;
    FDirty_choice: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_choice: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_touchTime(const value: Single; const Time: TX3DTime);
    procedure TouchTime(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript145Script = class
  private
    Fchoice: Int32;
    FEvent_choice: TX3DEvent;
    FBack_choice: TSFInt32;
    FDirty_choice: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_choice: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_touchTime(const value: Single; const Time: TX3DTime);
    procedure TouchTime(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript150Script = class
  private
    Fchoice: Int32;
    FEvent_choice: TX3DEvent;
    FBack_choice: TSFInt32;
    FDirty_choice: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_choice: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_touchTime(const value: Single; const Time: TX3DTime);
    procedure TouchTime(Value: TX3DField; const Time: TX3DTime);
  end;

  TScript155Script = class
  private
    Fchoice: Int32;
    FEvent_choice: TX3DEvent;
    FBack_choice: TSFInt32;
    FDirty_choice: Boolean;
    procedure FlushOutputs(const Time: TX3DTime);
  public
    constructor Create(const AEvent_choice: TX3DEvent);
    destructor Destroy; override;
    procedure RegisterHandlers(const Scene: TCastleSceneCore);
    procedure Set_touchTime(const value: Single; const Time: TX3DTime);
    procedure TouchTime(Value: TX3DField; const Time: TX3DTime);
  end;

var
  X3D0: TX3DRootNode;
  Group5: TGroupNode;
  Viewpoint6: TViewpointNode;
  Group7: TGroupNode;
  Switch8: TSwitchNode;
  Group9: TGroupNode;
  Script10: TScriptNode;
  FieldVal11: TX3DEvent;
  FieldVal12: TX3DEvent;
  CompiledScript10: TScript10Script;
  Inline13: TInlineNode;
  Group14: TGroupNode;
  Script15: TScriptNode;
  FieldVal16: TX3DEvent;
  FieldVal17: TX3DEvent;
  CompiledScript15: TScript15Script;
  Inline18: TInlineNode;
  Group19: TGroupNode;
  Script20: TScriptNode;
  FieldVal21: TX3DEvent;
  FieldVal22: TX3DEvent;
  CompiledScript20: TScript20Script;
  Inline23: TInlineNode;
  Group24: TGroupNode;
  Script25: TScriptNode;
  FieldVal26: TX3DEvent;
  FieldVal27: TX3DEvent;
  CompiledScript25: TScript25Script;
  Inline28: TInlineNode;
  Group29: TGroupNode;
  Script30: TScriptNode;
  FieldVal31: TX3DEvent;
  FieldVal32: TX3DEvent;
  CompiledScript30: TScript30Script;
  Inline33: TInlineNode;
  Group34: TGroupNode;
  Script35: TScriptNode;
  FieldVal36: TX3DEvent;
  FieldVal37: TX3DEvent;
  CompiledScript35: TScript35Script;
  Inline38: TInlineNode;
  Group39: TGroupNode;
  Script40: TScriptNode;
  FieldVal41: TX3DEvent;
  FieldVal42: TX3DEvent;
  CompiledScript40: TScript40Script;
  Inline43: TInlineNode;
  Group44: TGroupNode;
  Script45: TScriptNode;
  FieldVal46: TX3DEvent;
  FieldVal47: TX3DEvent;
  CompiledScript45: TScript45Script;
  Inline48: TInlineNode;
  Group49: TGroupNode;
  Script50: TScriptNode;
  FieldVal51: TX3DEvent;
  FieldVal52: TX3DEvent;
  CompiledScript50: TScript50Script;
  Inline53: TInlineNode;
  Group54: TGroupNode;
  Script55: TScriptNode;
  FieldVal56: TX3DEvent;
  FieldVal57: TX3DEvent;
  CompiledScript55: TScript55Script;
  Inline58: TInlineNode;
  Group59: TGroupNode;
  Script60: TScriptNode;
  FieldVal61: TX3DEvent;
  FieldVal62: TX3DEvent;
  CompiledScript60: TScript60Script;
  Inline63: TInlineNode;
  Group64: TGroupNode;
  Script65: TScriptNode;
  FieldVal66: TX3DEvent;
  FieldVal67: TX3DEvent;
  CompiledScript65: TScript65Script;
  Inline68: TInlineNode;
  Group69: TGroupNode;
  Script70: TScriptNode;
  FieldVal71: TX3DEvent;
  FieldVal72: TX3DEvent;
  CompiledScript70: TScript70Script;
  Inline73: TInlineNode;
  Group74: TGroupNode;
  Script75: TScriptNode;
  FieldVal76: TX3DEvent;
  FieldVal77: TX3DEvent;
  CompiledScript75: TScript75Script;
  Inline78: TInlineNode;
  Group79: TGroupNode;
  Script80: TScriptNode;
  FieldVal81: TX3DEvent;
  FieldVal82: TX3DEvent;
  CompiledScript80: TScript80Script;
  Inline83: TInlineNode;
  Group84: TGroupNode;
  Script85: TScriptNode;
  FieldVal86: TX3DEvent;
  FieldVal87: TX3DEvent;
  CompiledScript85: TScript85Script;
  Inline88: TInlineNode;
  Group89: TGroupNode;
  Script90: TScriptNode;
  FieldVal91: TX3DEvent;
  FieldVal92: TX3DEvent;
  CompiledScript90: TScript90Script;
  Inline93: TInlineNode;
  Group94: TGroupNode;
  Script95: TScriptNode;
  FieldVal96: TX3DEvent;
  FieldVal97: TX3DEvent;
  CompiledScript95: TScript95Script;
  Inline98: TInlineNode;
  Group99: TGroupNode;
  Script100: TScriptNode;
  FieldVal101: TX3DEvent;
  FieldVal102: TX3DEvent;
  CompiledScript100: TScript100Script;
  Inline103: TInlineNode;
  Group104: TGroupNode;
  Script105: TScriptNode;
  FieldVal106: TX3DEvent;
  FieldVal107: TX3DEvent;
  CompiledScript105: TScript105Script;
  Inline108: TInlineNode;
  Group109: TGroupNode;
  Script110: TScriptNode;
  FieldVal111: TX3DEvent;
  FieldVal112: TX3DEvent;
  CompiledScript110: TScript110Script;
  Inline113: TInlineNode;
  Group114: TGroupNode;
  Script115: TScriptNode;
  FieldVal116: TX3DEvent;
  FieldVal117: TX3DEvent;
  CompiledScript115: TScript115Script;
  Inline118: TInlineNode;
  Group119: TGroupNode;
  Script120: TScriptNode;
  FieldVal121: TX3DEvent;
  FieldVal122: TX3DEvent;
  CompiledScript120: TScript120Script;
  Inline123: TInlineNode;
  Group124: TGroupNode;
  Script125: TScriptNode;
  FieldVal126: TX3DEvent;
  FieldVal127: TX3DEvent;
  CompiledScript125: TScript125Script;
  Inline128: TInlineNode;
  Group129: TGroupNode;
  Script130: TScriptNode;
  FieldVal131: TX3DEvent;
  FieldVal132: TX3DEvent;
  CompiledScript130: TScript130Script;
  Inline133: TInlineNode;
  Group134: TGroupNode;
  Script135: TScriptNode;
  FieldVal136: TX3DEvent;
  FieldVal137: TX3DEvent;
  CompiledScript135: TScript135Script;
  Inline138: TInlineNode;
  Group139: TGroupNode;
  Script140: TScriptNode;
  FieldVal141: TX3DEvent;
  FieldVal142: TX3DEvent;
  CompiledScript140: TScript140Script;
  Inline143: TInlineNode;
  Group144: TGroupNode;
  Script145: TScriptNode;
  FieldVal146: TX3DEvent;
  FieldVal147: TX3DEvent;
  CompiledScript145: TScript145Script;
  Inline148: TInlineNode;
  Group149: TGroupNode;
  Script150: TScriptNode;
  FieldVal151: TX3DEvent;
  FieldVal152: TX3DEvent;
  CompiledScript150: TScript150Script;
  Inline153: TInlineNode;
  Group154: TGroupNode;
  Script155: TScriptNode;
  FieldVal156: TX3DEvent;
  FieldVal157: TX3DEvent;
  CompiledScript155: TScript155Script;
  Inline158: TInlineNode;
  Transform159: TTransformNode;
  TouchSensor160: TTouchSensorNode;
  Shape161: TShapeNode;
  Appearance162: TAppearanceNode;
  Material163: TMaterialNode;
  Text164: TTextNode;
  FontStyle165: TFontStyleNode;
  Shape166: TShapeNode;
  Appearance167: TAppearanceNode;
  Material168: TMaterialNode;
  IndexedFaceSet169: TIndexedFaceSetNode;
  Coordinate170: TCoordinateNode;
  Transform173: TTransformNode;
  TouchSensor174: TTouchSensorNode;
  Shape175: TShapeNode;
  Appearance176: TAppearanceNode;
  Material177: TMaterialNode;
  Text178: TTextNode;
  FontStyle179: TFontStyleNode;
  Shape180: TShapeNode;
  Appearance181: TAppearanceNode;
  Material182: TMaterialNode;
  IndexedFaceSet183: TIndexedFaceSetNode;
  Coordinate184: TCoordinateNode;
  Transform187: TTransformNode;
  TouchSensor188: TTouchSensorNode;
  Shape189: TShapeNode;
  Appearance190: TAppearanceNode;
  Material191: TMaterialNode;
  Text192: TTextNode;
  FontStyle193: TFontStyleNode;
  Shape194: TShapeNode;
  Appearance195: TAppearanceNode;
  Material196: TMaterialNode;
  IndexedFaceSet197: TIndexedFaceSetNode;
  Coordinate198: TCoordinateNode;
  Transform201: TTransformNode;
  TouchSensor202: TTouchSensorNode;
  Shape203: TShapeNode;
  Appearance204: TAppearanceNode;
  Material205: TMaterialNode;
  Text206: TTextNode;
  FontStyle207: TFontStyleNode;
  Shape208: TShapeNode;
  Appearance209: TAppearanceNode;
  Material210: TMaterialNode;
  IndexedFaceSet211: TIndexedFaceSetNode;
  Coordinate212: TCoordinateNode;
  Transform215: TTransformNode;
  TouchSensor216: TTouchSensorNode;
  Shape217: TShapeNode;
  Appearance218: TAppearanceNode;
  Material219: TMaterialNode;
  Text220: TTextNode;
  FontStyle221: TFontStyleNode;
  Shape222: TShapeNode;
  Appearance223: TAppearanceNode;
  Material224: TMaterialNode;
  IndexedFaceSet225: TIndexedFaceSetNode;
  Coordinate226: TCoordinateNode;
  Transform229: TTransformNode;
  TouchSensor230: TTouchSensorNode;
  Shape231: TShapeNode;
  Appearance232: TAppearanceNode;
  Material233: TMaterialNode;
  Text234: TTextNode;
  FontStyle235: TFontStyleNode;
  Shape236: TShapeNode;
  Appearance237: TAppearanceNode;
  Material238: TMaterialNode;
  IndexedFaceSet239: TIndexedFaceSetNode;
  Coordinate240: TCoordinateNode;
  Transform243: TTransformNode;
  TouchSensor244: TTouchSensorNode;
  Shape245: TShapeNode;
  Appearance246: TAppearanceNode;
  Material247: TMaterialNode;
  Text248: TTextNode;
  FontStyle249: TFontStyleNode;
  Shape250: TShapeNode;
  Appearance251: TAppearanceNode;
  Material252: TMaterialNode;
  IndexedFaceSet253: TIndexedFaceSetNode;
  Coordinate254: TCoordinateNode;
  Transform257: TTransformNode;
  TouchSensor258: TTouchSensorNode;
  Shape259: TShapeNode;
  Appearance260: TAppearanceNode;
  Material261: TMaterialNode;
  Text262: TTextNode;
  FontStyle263: TFontStyleNode;
  Shape264: TShapeNode;
  Appearance265: TAppearanceNode;
  Material266: TMaterialNode;
  IndexedFaceSet267: TIndexedFaceSetNode;
  Coordinate268: TCoordinateNode;
  Transform271: TTransformNode;
  TouchSensor272: TTouchSensorNode;
  Shape273: TShapeNode;
  Appearance274: TAppearanceNode;
  Material275: TMaterialNode;
  Text276: TTextNode;
  FontStyle277: TFontStyleNode;
  Shape278: TShapeNode;
  Appearance279: TAppearanceNode;
  Material280: TMaterialNode;
  IndexedFaceSet281: TIndexedFaceSetNode;
  Coordinate282: TCoordinateNode;
  Transform285: TTransformNode;
  TouchSensor286: TTouchSensorNode;
  Shape287: TShapeNode;
  Appearance288: TAppearanceNode;
  Material289: TMaterialNode;
  Text290: TTextNode;
  FontStyle291: TFontStyleNode;
  Shape292: TShapeNode;
  Appearance293: TAppearanceNode;
  Material294: TMaterialNode;
  IndexedFaceSet295: TIndexedFaceSetNode;
  Coordinate296: TCoordinateNode;
  Transform299: TTransformNode;
  TouchSensor300: TTouchSensorNode;
  Shape301: TShapeNode;
  Appearance302: TAppearanceNode;
  Material303: TMaterialNode;
  Text304: TTextNode;
  FontStyle305: TFontStyleNode;
  Shape306: TShapeNode;
  Appearance307: TAppearanceNode;
  Material308: TMaterialNode;
  IndexedFaceSet309: TIndexedFaceSetNode;
  Coordinate310: TCoordinateNode;
  Transform313: TTransformNode;
  TouchSensor314: TTouchSensorNode;
  Shape315: TShapeNode;
  Appearance316: TAppearanceNode;
  Material317: TMaterialNode;
  Text318: TTextNode;
  FontStyle319: TFontStyleNode;
  Shape320: TShapeNode;
  Appearance321: TAppearanceNode;
  Material322: TMaterialNode;
  IndexedFaceSet323: TIndexedFaceSetNode;
  Coordinate324: TCoordinateNode;
  Transform327: TTransformNode;
  TouchSensor328: TTouchSensorNode;
  Shape329: TShapeNode;
  Appearance330: TAppearanceNode;
  Material331: TMaterialNode;
  Text332: TTextNode;
  FontStyle333: TFontStyleNode;
  Shape334: TShapeNode;
  Appearance335: TAppearanceNode;
  Material336: TMaterialNode;
  IndexedFaceSet337: TIndexedFaceSetNode;
  Coordinate338: TCoordinateNode;
  Transform341: TTransformNode;
  TouchSensor342: TTouchSensorNode;
  Shape343: TShapeNode;
  Appearance344: TAppearanceNode;
  Material345: TMaterialNode;
  Text346: TTextNode;
  FontStyle347: TFontStyleNode;
  Shape348: TShapeNode;
  Appearance349: TAppearanceNode;
  Material350: TMaterialNode;
  IndexedFaceSet351: TIndexedFaceSetNode;
  Coordinate352: TCoordinateNode;
  Transform355: TTransformNode;
  TouchSensor356: TTouchSensorNode;
  Shape357: TShapeNode;
  Appearance358: TAppearanceNode;
  Material359: TMaterialNode;
  Text360: TTextNode;
  FontStyle361: TFontStyleNode;
  Shape362: TShapeNode;
  Appearance363: TAppearanceNode;
  Material364: TMaterialNode;
  IndexedFaceSet365: TIndexedFaceSetNode;
  Coordinate366: TCoordinateNode;
  Transform369: TTransformNode;
  TouchSensor370: TTouchSensorNode;
  Shape371: TShapeNode;
  Appearance372: TAppearanceNode;
  Material373: TMaterialNode;
  Text374: TTextNode;
  FontStyle375: TFontStyleNode;
  Shape376: TShapeNode;
  Appearance377: TAppearanceNode;
  Material378: TMaterialNode;
  IndexedFaceSet379: TIndexedFaceSetNode;
  Coordinate380: TCoordinateNode;
  Transform383: TTransformNode;
  TouchSensor384: TTouchSensorNode;
  Shape385: TShapeNode;
  Appearance386: TAppearanceNode;
  Material387: TMaterialNode;
  Text388: TTextNode;
  FontStyle389: TFontStyleNode;
  Shape390: TShapeNode;
  Appearance391: TAppearanceNode;
  Material392: TMaterialNode;
  IndexedFaceSet393: TIndexedFaceSetNode;
  Coordinate394: TCoordinateNode;
  Transform397: TTransformNode;
  TouchSensor398: TTouchSensorNode;
  Shape399: TShapeNode;
  Appearance400: TAppearanceNode;
  Material401: TMaterialNode;
  Text402: TTextNode;
  FontStyle403: TFontStyleNode;
  Shape404: TShapeNode;
  Appearance405: TAppearanceNode;
  Material406: TMaterialNode;
  IndexedFaceSet407: TIndexedFaceSetNode;
  Coordinate408: TCoordinateNode;
  Transform411: TTransformNode;
  TouchSensor412: TTouchSensorNode;
  Shape413: TShapeNode;
  Appearance414: TAppearanceNode;
  Material415: TMaterialNode;
  Text416: TTextNode;
  FontStyle417: TFontStyleNode;
  Shape418: TShapeNode;
  Appearance419: TAppearanceNode;
  Material420: TMaterialNode;
  IndexedFaceSet421: TIndexedFaceSetNode;
  Coordinate422: TCoordinateNode;
  Transform425: TTransformNode;
  TouchSensor426: TTouchSensorNode;
  Shape427: TShapeNode;
  Appearance428: TAppearanceNode;
  Material429: TMaterialNode;
  Text430: TTextNode;
  FontStyle431: TFontStyleNode;
  Shape432: TShapeNode;
  Appearance433: TAppearanceNode;
  Material434: TMaterialNode;
  IndexedFaceSet435: TIndexedFaceSetNode;
  Coordinate436: TCoordinateNode;
  Transform439: TTransformNode;
  TouchSensor440: TTouchSensorNode;
  Shape441: TShapeNode;
  Appearance442: TAppearanceNode;
  Material443: TMaterialNode;
  Text444: TTextNode;
  FontStyle445: TFontStyleNode;
  Shape446: TShapeNode;
  Appearance447: TAppearanceNode;
  Material448: TMaterialNode;
  IndexedFaceSet449: TIndexedFaceSetNode;
  Coordinate450: TCoordinateNode;
  Transform453: TTransformNode;
  TouchSensor454: TTouchSensorNode;
  Shape455: TShapeNode;
  Appearance456: TAppearanceNode;
  Material457: TMaterialNode;
  Text458: TTextNode;
  FontStyle459: TFontStyleNode;
  Shape460: TShapeNode;
  Appearance461: TAppearanceNode;
  Material462: TMaterialNode;
  IndexedFaceSet463: TIndexedFaceSetNode;
  Coordinate464: TCoordinateNode;
  Transform467: TTransformNode;
  TouchSensor468: TTouchSensorNode;
  Shape469: TShapeNode;
  Appearance470: TAppearanceNode;
  Material471: TMaterialNode;
  Text472: TTextNode;
  FontStyle473: TFontStyleNode;
  Shape474: TShapeNode;
  Appearance475: TAppearanceNode;
  Material476: TMaterialNode;
  IndexedFaceSet477: TIndexedFaceSetNode;
  Coordinate478: TCoordinateNode;
  Transform481: TTransformNode;
  TouchSensor482: TTouchSensorNode;
  Shape483: TShapeNode;
  Appearance484: TAppearanceNode;
  Material485: TMaterialNode;
  Text486: TTextNode;
  FontStyle487: TFontStyleNode;
  Shape488: TShapeNode;
  Appearance489: TAppearanceNode;
  Material490: TMaterialNode;
  IndexedFaceSet491: TIndexedFaceSetNode;
  Coordinate492: TCoordinateNode;
  Transform495: TTransformNode;
  TouchSensor496: TTouchSensorNode;
  Shape497: TShapeNode;
  Appearance498: TAppearanceNode;
  Material499: TMaterialNode;
  Text500: TTextNode;
  FontStyle501: TFontStyleNode;
  Shape502: TShapeNode;
  Appearance503: TAppearanceNode;
  Material504: TMaterialNode;
  IndexedFaceSet505: TIndexedFaceSetNode;
  Coordinate506: TCoordinateNode;
  Transform509: TTransformNode;
  TouchSensor510: TTouchSensorNode;
  Shape511: TShapeNode;
  Appearance512: TAppearanceNode;
  Material513: TMaterialNode;
  Text514: TTextNode;
  FontStyle515: TFontStyleNode;
  Shape516: TShapeNode;
  Appearance517: TAppearanceNode;
  Material518: TMaterialNode;
  IndexedFaceSet519: TIndexedFaceSetNode;
  Coordinate520: TCoordinateNode;
  Transform523: TTransformNode;
  TouchSensor524: TTouchSensorNode;
  Shape525: TShapeNode;
  Appearance526: TAppearanceNode;
  Material527: TMaterialNode;
  Text528: TTextNode;
  FontStyle529: TFontStyleNode;
  Shape530: TShapeNode;
  Appearance531: TAppearanceNode;
  Material532: TMaterialNode;
  IndexedFaceSet533: TIndexedFaceSetNode;
  Coordinate534: TCoordinateNode;
  Transform537: TTransformNode;
  TouchSensor538: TTouchSensorNode;
  Shape539: TShapeNode;
  Appearance540: TAppearanceNode;
  Material541: TMaterialNode;
  Text542: TTextNode;
  FontStyle543: TFontStyleNode;
  Shape544: TShapeNode;
  Appearance545: TAppearanceNode;
  Material546: TMaterialNode;
  IndexedFaceSet547: TIndexedFaceSetNode;
  Coordinate548: TCoordinateNode;
  Transform551: TTransformNode;
  TouchSensor552: TTouchSensorNode;
  Shape553: TShapeNode;
  Appearance554: TAppearanceNode;
  Material555: TMaterialNode;
  Text556: TTextNode;
  FontStyle557: TFontStyleNode;
  Shape558: TShapeNode;
  Appearance559: TAppearanceNode;
  Material560: TMaterialNode;
  IndexedFaceSet561: TIndexedFaceSetNode;
  Coordinate562: TCoordinateNode;
  Transform565: TTransformNode;
  TouchSensor566: TTouchSensorNode;
  Shape567: TShapeNode;
  Appearance568: TAppearanceNode;
  Material569: TMaterialNode;
  Text570: TTextNode;
  FontStyle571: TFontStyleNode;
  Shape572: TShapeNode;
  Appearance573: TAppearanceNode;
  Material574: TMaterialNode;
  IndexedFaceSet575: TIndexedFaceSetNode;
  Coordinate576: TCoordinateNode;

constructor TScript10Script.Create(const AEvent_choice: TX3DEvent);
begin
  inherited Create;
  Fchoice := 0;
  FEvent_choice := nil;
  FBack_choice := TSFInt32.Create(nil, False, 'choice', 0);
  FDirty_choice := False;
  FEvent_choice := AEvent_choice;
end;

destructor TScript10Script.Destroy;
begin
  FreeAndNil(FBack_choice);
  inherited Destroy;
end;

procedure TScript10Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_choice then
  begin
    FDirty_choice := False;
    if FEvent_choice <> nil then
    begin
      FBack_choice.Value := Fchoice;
      FEvent_choice.Send(FBack_choice, Time);
    end;
  end;
end;

procedure TScript10Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script10_touchTime', {$ifdef FPC}@{$endif}TouchTime);
end;

procedure TScript10Script.Set_touchTime(const value: Single; const Time: TX3DTime);
begin
  Fchoice := 0; FDirty_choice := True;
end;

procedure TScript10Script.TouchTime(Value: TX3DField; const Time: TX3DTime);
begin
  Fchoice := 0; FDirty_choice := True;
  FlushOutputs(Time);
end;

constructor TScript15Script.Create(const AEvent_choice: TX3DEvent);
begin
  inherited Create;
  Fchoice := 0;
  FEvent_choice := nil;
  FBack_choice := TSFInt32.Create(nil, False, 'choice', 0);
  FDirty_choice := False;
  FEvent_choice := AEvent_choice;
end;

destructor TScript15Script.Destroy;
begin
  FreeAndNil(FBack_choice);
  inherited Destroy;
end;

procedure TScript15Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_choice then
  begin
    FDirty_choice := False;
    if FEvent_choice <> nil then
    begin
      FBack_choice.Value := Fchoice;
      FEvent_choice.Send(FBack_choice, Time);
    end;
  end;
end;

procedure TScript15Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script15_touchTime', {$ifdef FPC}@{$endif}TouchTime);
end;

procedure TScript15Script.Set_touchTime(const value: Single; const Time: TX3DTime);
begin
  Fchoice := 1; FDirty_choice := True;
end;

procedure TScript15Script.TouchTime(Value: TX3DField; const Time: TX3DTime);
begin
  Fchoice := 1; FDirty_choice := True;
  FlushOutputs(Time);
end;

constructor TScript20Script.Create(const AEvent_choice: TX3DEvent);
begin
  inherited Create;
  Fchoice := 0;
  FEvent_choice := nil;
  FBack_choice := TSFInt32.Create(nil, False, 'choice', 0);
  FDirty_choice := False;
  FEvent_choice := AEvent_choice;
end;

destructor TScript20Script.Destroy;
begin
  FreeAndNil(FBack_choice);
  inherited Destroy;
end;

procedure TScript20Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_choice then
  begin
    FDirty_choice := False;
    if FEvent_choice <> nil then
    begin
      FBack_choice.Value := Fchoice;
      FEvent_choice.Send(FBack_choice, Time);
    end;
  end;
end;

procedure TScript20Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script20_touchTime', {$ifdef FPC}@{$endif}TouchTime);
end;

procedure TScript20Script.Set_touchTime(const value: Single; const Time: TX3DTime);
begin
  Fchoice := 2; FDirty_choice := True;
end;

procedure TScript20Script.TouchTime(Value: TX3DField; const Time: TX3DTime);
begin
  Fchoice := 2; FDirty_choice := True;
  FlushOutputs(Time);
end;

constructor TScript25Script.Create(const AEvent_choice: TX3DEvent);
begin
  inherited Create;
  Fchoice := 0;
  FEvent_choice := nil;
  FBack_choice := TSFInt32.Create(nil, False, 'choice', 0);
  FDirty_choice := False;
  FEvent_choice := AEvent_choice;
end;

destructor TScript25Script.Destroy;
begin
  FreeAndNil(FBack_choice);
  inherited Destroy;
end;

procedure TScript25Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_choice then
  begin
    FDirty_choice := False;
    if FEvent_choice <> nil then
    begin
      FBack_choice.Value := Fchoice;
      FEvent_choice.Send(FBack_choice, Time);
    end;
  end;
end;

procedure TScript25Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script25_touchTime', {$ifdef FPC}@{$endif}TouchTime);
end;

procedure TScript25Script.Set_touchTime(const value: Single; const Time: TX3DTime);
begin
  Fchoice := 3; FDirty_choice := True;
end;

procedure TScript25Script.TouchTime(Value: TX3DField; const Time: TX3DTime);
begin
  Fchoice := 3; FDirty_choice := True;
  FlushOutputs(Time);
end;

constructor TScript30Script.Create(const AEvent_choice: TX3DEvent);
begin
  inherited Create;
  Fchoice := 0;
  FEvent_choice := nil;
  FBack_choice := TSFInt32.Create(nil, False, 'choice', 0);
  FDirty_choice := False;
  FEvent_choice := AEvent_choice;
end;

destructor TScript30Script.Destroy;
begin
  FreeAndNil(FBack_choice);
  inherited Destroy;
end;

procedure TScript30Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_choice then
  begin
    FDirty_choice := False;
    if FEvent_choice <> nil then
    begin
      FBack_choice.Value := Fchoice;
      FEvent_choice.Send(FBack_choice, Time);
    end;
  end;
end;

procedure TScript30Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script30_touchTime', {$ifdef FPC}@{$endif}TouchTime);
end;

procedure TScript30Script.Set_touchTime(const value: Single; const Time: TX3DTime);
begin
  Fchoice := 4; FDirty_choice := True;
end;

procedure TScript30Script.TouchTime(Value: TX3DField; const Time: TX3DTime);
begin
  Fchoice := 4; FDirty_choice := True;
  FlushOutputs(Time);
end;

constructor TScript35Script.Create(const AEvent_choice: TX3DEvent);
begin
  inherited Create;
  Fchoice := 0;
  FEvent_choice := nil;
  FBack_choice := TSFInt32.Create(nil, False, 'choice', 0);
  FDirty_choice := False;
  FEvent_choice := AEvent_choice;
end;

destructor TScript35Script.Destroy;
begin
  FreeAndNil(FBack_choice);
  inherited Destroy;
end;

procedure TScript35Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_choice then
  begin
    FDirty_choice := False;
    if FEvent_choice <> nil then
    begin
      FBack_choice.Value := Fchoice;
      FEvent_choice.Send(FBack_choice, Time);
    end;
  end;
end;

procedure TScript35Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script35_touchTime', {$ifdef FPC}@{$endif}TouchTime);
end;

procedure TScript35Script.Set_touchTime(const value: Single; const Time: TX3DTime);
begin
  Fchoice := 5; FDirty_choice := True;
end;

procedure TScript35Script.TouchTime(Value: TX3DField; const Time: TX3DTime);
begin
  Fchoice := 5; FDirty_choice := True;
  FlushOutputs(Time);
end;

constructor TScript40Script.Create(const AEvent_choice: TX3DEvent);
begin
  inherited Create;
  Fchoice := 0;
  FEvent_choice := nil;
  FBack_choice := TSFInt32.Create(nil, False, 'choice', 0);
  FDirty_choice := False;
  FEvent_choice := AEvent_choice;
end;

destructor TScript40Script.Destroy;
begin
  FreeAndNil(FBack_choice);
  inherited Destroy;
end;

procedure TScript40Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_choice then
  begin
    FDirty_choice := False;
    if FEvent_choice <> nil then
    begin
      FBack_choice.Value := Fchoice;
      FEvent_choice.Send(FBack_choice, Time);
    end;
  end;
end;

procedure TScript40Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script40_touchTime', {$ifdef FPC}@{$endif}TouchTime);
end;

procedure TScript40Script.Set_touchTime(const value: Single; const Time: TX3DTime);
begin
  Fchoice := 6; FDirty_choice := True;
end;

procedure TScript40Script.TouchTime(Value: TX3DField; const Time: TX3DTime);
begin
  Fchoice := 6; FDirty_choice := True;
  FlushOutputs(Time);
end;

constructor TScript45Script.Create(const AEvent_choice: TX3DEvent);
begin
  inherited Create;
  Fchoice := 0;
  FEvent_choice := nil;
  FBack_choice := TSFInt32.Create(nil, False, 'choice', 0);
  FDirty_choice := False;
  FEvent_choice := AEvent_choice;
end;

destructor TScript45Script.Destroy;
begin
  FreeAndNil(FBack_choice);
  inherited Destroy;
end;

procedure TScript45Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_choice then
  begin
    FDirty_choice := False;
    if FEvent_choice <> nil then
    begin
      FBack_choice.Value := Fchoice;
      FEvent_choice.Send(FBack_choice, Time);
    end;
  end;
end;

procedure TScript45Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script45_touchTime', {$ifdef FPC}@{$endif}TouchTime);
end;

procedure TScript45Script.Set_touchTime(const value: Single; const Time: TX3DTime);
begin
  Fchoice := 7; FDirty_choice := True;
end;

procedure TScript45Script.TouchTime(Value: TX3DField; const Time: TX3DTime);
begin
  Fchoice := 7; FDirty_choice := True;
  FlushOutputs(Time);
end;

constructor TScript50Script.Create(const AEvent_choice: TX3DEvent);
begin
  inherited Create;
  Fchoice := 0;
  FEvent_choice := nil;
  FBack_choice := TSFInt32.Create(nil, False, 'choice', 0);
  FDirty_choice := False;
  FEvent_choice := AEvent_choice;
end;

destructor TScript50Script.Destroy;
begin
  FreeAndNil(FBack_choice);
  inherited Destroy;
end;

procedure TScript50Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_choice then
  begin
    FDirty_choice := False;
    if FEvent_choice <> nil then
    begin
      FBack_choice.Value := Fchoice;
      FEvent_choice.Send(FBack_choice, Time);
    end;
  end;
end;

procedure TScript50Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script50_touchTime', {$ifdef FPC}@{$endif}TouchTime);
end;

procedure TScript50Script.Set_touchTime(const value: Single; const Time: TX3DTime);
begin
  Fchoice := 8; FDirty_choice := True;
end;

procedure TScript50Script.TouchTime(Value: TX3DField; const Time: TX3DTime);
begin
  Fchoice := 8; FDirty_choice := True;
  FlushOutputs(Time);
end;

constructor TScript55Script.Create(const AEvent_choice: TX3DEvent);
begin
  inherited Create;
  Fchoice := 0;
  FEvent_choice := nil;
  FBack_choice := TSFInt32.Create(nil, False, 'choice', 0);
  FDirty_choice := False;
  FEvent_choice := AEvent_choice;
end;

destructor TScript55Script.Destroy;
begin
  FreeAndNil(FBack_choice);
  inherited Destroy;
end;

procedure TScript55Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_choice then
  begin
    FDirty_choice := False;
    if FEvent_choice <> nil then
    begin
      FBack_choice.Value := Fchoice;
      FEvent_choice.Send(FBack_choice, Time);
    end;
  end;
end;

procedure TScript55Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script55_touchTime', {$ifdef FPC}@{$endif}TouchTime);
end;

procedure TScript55Script.Set_touchTime(const value: Single; const Time: TX3DTime);
begin
  Fchoice := 9; FDirty_choice := True;
end;

procedure TScript55Script.TouchTime(Value: TX3DField; const Time: TX3DTime);
begin
  Fchoice := 9; FDirty_choice := True;
  FlushOutputs(Time);
end;

constructor TScript60Script.Create(const AEvent_choice: TX3DEvent);
begin
  inherited Create;
  Fchoice := 0;
  FEvent_choice := nil;
  FBack_choice := TSFInt32.Create(nil, False, 'choice', 0);
  FDirty_choice := False;
  FEvent_choice := AEvent_choice;
end;

destructor TScript60Script.Destroy;
begin
  FreeAndNil(FBack_choice);
  inherited Destroy;
end;

procedure TScript60Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_choice then
  begin
    FDirty_choice := False;
    if FEvent_choice <> nil then
    begin
      FBack_choice.Value := Fchoice;
      FEvent_choice.Send(FBack_choice, Time);
    end;
  end;
end;

procedure TScript60Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script60_touchTime', {$ifdef FPC}@{$endif}TouchTime);
end;

procedure TScript60Script.Set_touchTime(const value: Single; const Time: TX3DTime);
begin
  Fchoice := 10; FDirty_choice := True;
end;

procedure TScript60Script.TouchTime(Value: TX3DField; const Time: TX3DTime);
begin
  Fchoice := 10; FDirty_choice := True;
  FlushOutputs(Time);
end;

constructor TScript65Script.Create(const AEvent_choice: TX3DEvent);
begin
  inherited Create;
  Fchoice := 0;
  FEvent_choice := nil;
  FBack_choice := TSFInt32.Create(nil, False, 'choice', 0);
  FDirty_choice := False;
  FEvent_choice := AEvent_choice;
end;

destructor TScript65Script.Destroy;
begin
  FreeAndNil(FBack_choice);
  inherited Destroy;
end;

procedure TScript65Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_choice then
  begin
    FDirty_choice := False;
    if FEvent_choice <> nil then
    begin
      FBack_choice.Value := Fchoice;
      FEvent_choice.Send(FBack_choice, Time);
    end;
  end;
end;

procedure TScript65Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script65_touchTime', {$ifdef FPC}@{$endif}TouchTime);
end;

procedure TScript65Script.Set_touchTime(const value: Single; const Time: TX3DTime);
begin
  Fchoice := 11; FDirty_choice := True;
end;

procedure TScript65Script.TouchTime(Value: TX3DField; const Time: TX3DTime);
begin
  Fchoice := 11; FDirty_choice := True;
  FlushOutputs(Time);
end;

constructor TScript70Script.Create(const AEvent_choice: TX3DEvent);
begin
  inherited Create;
  Fchoice := 0;
  FEvent_choice := nil;
  FBack_choice := TSFInt32.Create(nil, False, 'choice', 0);
  FDirty_choice := False;
  FEvent_choice := AEvent_choice;
end;

destructor TScript70Script.Destroy;
begin
  FreeAndNil(FBack_choice);
  inherited Destroy;
end;

procedure TScript70Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_choice then
  begin
    FDirty_choice := False;
    if FEvent_choice <> nil then
    begin
      FBack_choice.Value := Fchoice;
      FEvent_choice.Send(FBack_choice, Time);
    end;
  end;
end;

procedure TScript70Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script70_touchTime', {$ifdef FPC}@{$endif}TouchTime);
end;

procedure TScript70Script.Set_touchTime(const value: Single; const Time: TX3DTime);
begin
  Fchoice := 12; FDirty_choice := True;
end;

procedure TScript70Script.TouchTime(Value: TX3DField; const Time: TX3DTime);
begin
  Fchoice := 12; FDirty_choice := True;
  FlushOutputs(Time);
end;

constructor TScript75Script.Create(const AEvent_choice: TX3DEvent);
begin
  inherited Create;
  Fchoice := 0;
  FEvent_choice := nil;
  FBack_choice := TSFInt32.Create(nil, False, 'choice', 0);
  FDirty_choice := False;
  FEvent_choice := AEvent_choice;
end;

destructor TScript75Script.Destroy;
begin
  FreeAndNil(FBack_choice);
  inherited Destroy;
end;

procedure TScript75Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_choice then
  begin
    FDirty_choice := False;
    if FEvent_choice <> nil then
    begin
      FBack_choice.Value := Fchoice;
      FEvent_choice.Send(FBack_choice, Time);
    end;
  end;
end;

procedure TScript75Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script75_touchTime', {$ifdef FPC}@{$endif}TouchTime);
end;

procedure TScript75Script.Set_touchTime(const value: Single; const Time: TX3DTime);
begin
  Fchoice := 13; FDirty_choice := True;
end;

procedure TScript75Script.TouchTime(Value: TX3DField; const Time: TX3DTime);
begin
  Fchoice := 13; FDirty_choice := True;
  FlushOutputs(Time);
end;

constructor TScript80Script.Create(const AEvent_choice: TX3DEvent);
begin
  inherited Create;
  Fchoice := 0;
  FEvent_choice := nil;
  FBack_choice := TSFInt32.Create(nil, False, 'choice', 0);
  FDirty_choice := False;
  FEvent_choice := AEvent_choice;
end;

destructor TScript80Script.Destroy;
begin
  FreeAndNil(FBack_choice);
  inherited Destroy;
end;

procedure TScript80Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_choice then
  begin
    FDirty_choice := False;
    if FEvent_choice <> nil then
    begin
      FBack_choice.Value := Fchoice;
      FEvent_choice.Send(FBack_choice, Time);
    end;
  end;
end;

procedure TScript80Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script80_touchTime', {$ifdef FPC}@{$endif}TouchTime);
end;

procedure TScript80Script.Set_touchTime(const value: Single; const Time: TX3DTime);
begin
  Fchoice := 14; FDirty_choice := True;
end;

procedure TScript80Script.TouchTime(Value: TX3DField; const Time: TX3DTime);
begin
  Fchoice := 14; FDirty_choice := True;
  FlushOutputs(Time);
end;

constructor TScript85Script.Create(const AEvent_choice: TX3DEvent);
begin
  inherited Create;
  Fchoice := 0;
  FEvent_choice := nil;
  FBack_choice := TSFInt32.Create(nil, False, 'choice', 0);
  FDirty_choice := False;
  FEvent_choice := AEvent_choice;
end;

destructor TScript85Script.Destroy;
begin
  FreeAndNil(FBack_choice);
  inherited Destroy;
end;

procedure TScript85Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_choice then
  begin
    FDirty_choice := False;
    if FEvent_choice <> nil then
    begin
      FBack_choice.Value := Fchoice;
      FEvent_choice.Send(FBack_choice, Time);
    end;
  end;
end;

procedure TScript85Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script85_touchTime', {$ifdef FPC}@{$endif}TouchTime);
end;

procedure TScript85Script.Set_touchTime(const value: Single; const Time: TX3DTime);
begin
  Fchoice := 15; FDirty_choice := True;
end;

procedure TScript85Script.TouchTime(Value: TX3DField; const Time: TX3DTime);
begin
  Fchoice := 15; FDirty_choice := True;
  FlushOutputs(Time);
end;

constructor TScript90Script.Create(const AEvent_choice: TX3DEvent);
begin
  inherited Create;
  Fchoice := 0;
  FEvent_choice := nil;
  FBack_choice := TSFInt32.Create(nil, False, 'choice', 0);
  FDirty_choice := False;
  FEvent_choice := AEvent_choice;
end;

destructor TScript90Script.Destroy;
begin
  FreeAndNil(FBack_choice);
  inherited Destroy;
end;

procedure TScript90Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_choice then
  begin
    FDirty_choice := False;
    if FEvent_choice <> nil then
    begin
      FBack_choice.Value := Fchoice;
      FEvent_choice.Send(FBack_choice, Time);
    end;
  end;
end;

procedure TScript90Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script90_touchTime', {$ifdef FPC}@{$endif}TouchTime);
end;

procedure TScript90Script.Set_touchTime(const value: Single; const Time: TX3DTime);
begin
  Fchoice := 16; FDirty_choice := True;
end;

procedure TScript90Script.TouchTime(Value: TX3DField; const Time: TX3DTime);
begin
  Fchoice := 16; FDirty_choice := True;
  FlushOutputs(Time);
end;

constructor TScript95Script.Create(const AEvent_choice: TX3DEvent);
begin
  inherited Create;
  Fchoice := 0;
  FEvent_choice := nil;
  FBack_choice := TSFInt32.Create(nil, False, 'choice', 0);
  FDirty_choice := False;
  FEvent_choice := AEvent_choice;
end;

destructor TScript95Script.Destroy;
begin
  FreeAndNil(FBack_choice);
  inherited Destroy;
end;

procedure TScript95Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_choice then
  begin
    FDirty_choice := False;
    if FEvent_choice <> nil then
    begin
      FBack_choice.Value := Fchoice;
      FEvent_choice.Send(FBack_choice, Time);
    end;
  end;
end;

procedure TScript95Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script95_touchTime', {$ifdef FPC}@{$endif}TouchTime);
end;

procedure TScript95Script.Set_touchTime(const value: Single; const Time: TX3DTime);
begin
  Fchoice := 17; FDirty_choice := True;
end;

procedure TScript95Script.TouchTime(Value: TX3DField; const Time: TX3DTime);
begin
  Fchoice := 17; FDirty_choice := True;
  FlushOutputs(Time);
end;

constructor TScript100Script.Create(const AEvent_choice: TX3DEvent);
begin
  inherited Create;
  Fchoice := 0;
  FEvent_choice := nil;
  FBack_choice := TSFInt32.Create(nil, False, 'choice', 0);
  FDirty_choice := False;
  FEvent_choice := AEvent_choice;
end;

destructor TScript100Script.Destroy;
begin
  FreeAndNil(FBack_choice);
  inherited Destroy;
end;

procedure TScript100Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_choice then
  begin
    FDirty_choice := False;
    if FEvent_choice <> nil then
    begin
      FBack_choice.Value := Fchoice;
      FEvent_choice.Send(FBack_choice, Time);
    end;
  end;
end;

procedure TScript100Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script100_touchTime', {$ifdef FPC}@{$endif}TouchTime);
end;

procedure TScript100Script.Set_touchTime(const value: Single; const Time: TX3DTime);
begin
  Fchoice := 18; FDirty_choice := True;
end;

procedure TScript100Script.TouchTime(Value: TX3DField; const Time: TX3DTime);
begin
  Fchoice := 18; FDirty_choice := True;
  FlushOutputs(Time);
end;

constructor TScript105Script.Create(const AEvent_choice: TX3DEvent);
begin
  inherited Create;
  Fchoice := 0;
  FEvent_choice := nil;
  FBack_choice := TSFInt32.Create(nil, False, 'choice', 0);
  FDirty_choice := False;
  FEvent_choice := AEvent_choice;
end;

destructor TScript105Script.Destroy;
begin
  FreeAndNil(FBack_choice);
  inherited Destroy;
end;

procedure TScript105Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_choice then
  begin
    FDirty_choice := False;
    if FEvent_choice <> nil then
    begin
      FBack_choice.Value := Fchoice;
      FEvent_choice.Send(FBack_choice, Time);
    end;
  end;
end;

procedure TScript105Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script105_touchTime', {$ifdef FPC}@{$endif}TouchTime);
end;

procedure TScript105Script.Set_touchTime(const value: Single; const Time: TX3DTime);
begin
  Fchoice := 19; FDirty_choice := True;
end;

procedure TScript105Script.TouchTime(Value: TX3DField; const Time: TX3DTime);
begin
  Fchoice := 19; FDirty_choice := True;
  FlushOutputs(Time);
end;

constructor TScript110Script.Create(const AEvent_choice: TX3DEvent);
begin
  inherited Create;
  Fchoice := 0;
  FEvent_choice := nil;
  FBack_choice := TSFInt32.Create(nil, False, 'choice', 0);
  FDirty_choice := False;
  FEvent_choice := AEvent_choice;
end;

destructor TScript110Script.Destroy;
begin
  FreeAndNil(FBack_choice);
  inherited Destroy;
end;

procedure TScript110Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_choice then
  begin
    FDirty_choice := False;
    if FEvent_choice <> nil then
    begin
      FBack_choice.Value := Fchoice;
      FEvent_choice.Send(FBack_choice, Time);
    end;
  end;
end;

procedure TScript110Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script110_touchTime', {$ifdef FPC}@{$endif}TouchTime);
end;

procedure TScript110Script.Set_touchTime(const value: Single; const Time: TX3DTime);
begin
  Fchoice := 20; FDirty_choice := True;
end;

procedure TScript110Script.TouchTime(Value: TX3DField; const Time: TX3DTime);
begin
  Fchoice := 20; FDirty_choice := True;
  FlushOutputs(Time);
end;

constructor TScript115Script.Create(const AEvent_choice: TX3DEvent);
begin
  inherited Create;
  Fchoice := 0;
  FEvent_choice := nil;
  FBack_choice := TSFInt32.Create(nil, False, 'choice', 0);
  FDirty_choice := False;
  FEvent_choice := AEvent_choice;
end;

destructor TScript115Script.Destroy;
begin
  FreeAndNil(FBack_choice);
  inherited Destroy;
end;

procedure TScript115Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_choice then
  begin
    FDirty_choice := False;
    if FEvent_choice <> nil then
    begin
      FBack_choice.Value := Fchoice;
      FEvent_choice.Send(FBack_choice, Time);
    end;
  end;
end;

procedure TScript115Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script115_touchTime', {$ifdef FPC}@{$endif}TouchTime);
end;

procedure TScript115Script.Set_touchTime(const value: Single; const Time: TX3DTime);
begin
  Fchoice := 21; FDirty_choice := True;
end;

procedure TScript115Script.TouchTime(Value: TX3DField; const Time: TX3DTime);
begin
  Fchoice := 21; FDirty_choice := True;
  FlushOutputs(Time);
end;

constructor TScript120Script.Create(const AEvent_choice: TX3DEvent);
begin
  inherited Create;
  Fchoice := 0;
  FEvent_choice := nil;
  FBack_choice := TSFInt32.Create(nil, False, 'choice', 0);
  FDirty_choice := False;
  FEvent_choice := AEvent_choice;
end;

destructor TScript120Script.Destroy;
begin
  FreeAndNil(FBack_choice);
  inherited Destroy;
end;

procedure TScript120Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_choice then
  begin
    FDirty_choice := False;
    if FEvent_choice <> nil then
    begin
      FBack_choice.Value := Fchoice;
      FEvent_choice.Send(FBack_choice, Time);
    end;
  end;
end;

procedure TScript120Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script120_touchTime', {$ifdef FPC}@{$endif}TouchTime);
end;

procedure TScript120Script.Set_touchTime(const value: Single; const Time: TX3DTime);
begin
  Fchoice := 22; FDirty_choice := True;
end;

procedure TScript120Script.TouchTime(Value: TX3DField; const Time: TX3DTime);
begin
  Fchoice := 22; FDirty_choice := True;
  FlushOutputs(Time);
end;

constructor TScript125Script.Create(const AEvent_choice: TX3DEvent);
begin
  inherited Create;
  Fchoice := 0;
  FEvent_choice := nil;
  FBack_choice := TSFInt32.Create(nil, False, 'choice', 0);
  FDirty_choice := False;
  FEvent_choice := AEvent_choice;
end;

destructor TScript125Script.Destroy;
begin
  FreeAndNil(FBack_choice);
  inherited Destroy;
end;

procedure TScript125Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_choice then
  begin
    FDirty_choice := False;
    if FEvent_choice <> nil then
    begin
      FBack_choice.Value := Fchoice;
      FEvent_choice.Send(FBack_choice, Time);
    end;
  end;
end;

procedure TScript125Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script125_touchTime', {$ifdef FPC}@{$endif}TouchTime);
end;

procedure TScript125Script.Set_touchTime(const value: Single; const Time: TX3DTime);
begin
  Fchoice := 23; FDirty_choice := True;
end;

procedure TScript125Script.TouchTime(Value: TX3DField; const Time: TX3DTime);
begin
  Fchoice := 23; FDirty_choice := True;
  FlushOutputs(Time);
end;

constructor TScript130Script.Create(const AEvent_choice: TX3DEvent);
begin
  inherited Create;
  Fchoice := 0;
  FEvent_choice := nil;
  FBack_choice := TSFInt32.Create(nil, False, 'choice', 0);
  FDirty_choice := False;
  FEvent_choice := AEvent_choice;
end;

destructor TScript130Script.Destroy;
begin
  FreeAndNil(FBack_choice);
  inherited Destroy;
end;

procedure TScript130Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_choice then
  begin
    FDirty_choice := False;
    if FEvent_choice <> nil then
    begin
      FBack_choice.Value := Fchoice;
      FEvent_choice.Send(FBack_choice, Time);
    end;
  end;
end;

procedure TScript130Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script130_touchTime', {$ifdef FPC}@{$endif}TouchTime);
end;

procedure TScript130Script.Set_touchTime(const value: Single; const Time: TX3DTime);
begin
  Fchoice := 24; FDirty_choice := True;
end;

procedure TScript130Script.TouchTime(Value: TX3DField; const Time: TX3DTime);
begin
  Fchoice := 24; FDirty_choice := True;
  FlushOutputs(Time);
end;

constructor TScript135Script.Create(const AEvent_choice: TX3DEvent);
begin
  inherited Create;
  Fchoice := 0;
  FEvent_choice := nil;
  FBack_choice := TSFInt32.Create(nil, False, 'choice', 0);
  FDirty_choice := False;
  FEvent_choice := AEvent_choice;
end;

destructor TScript135Script.Destroy;
begin
  FreeAndNil(FBack_choice);
  inherited Destroy;
end;

procedure TScript135Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_choice then
  begin
    FDirty_choice := False;
    if FEvent_choice <> nil then
    begin
      FBack_choice.Value := Fchoice;
      FEvent_choice.Send(FBack_choice, Time);
    end;
  end;
end;

procedure TScript135Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script135_touchTime', {$ifdef FPC}@{$endif}TouchTime);
end;

procedure TScript135Script.Set_touchTime(const value: Single; const Time: TX3DTime);
begin
  Fchoice := 25; FDirty_choice := True;
end;

procedure TScript135Script.TouchTime(Value: TX3DField; const Time: TX3DTime);
begin
  Fchoice := 25; FDirty_choice := True;
  FlushOutputs(Time);
end;

constructor TScript140Script.Create(const AEvent_choice: TX3DEvent);
begin
  inherited Create;
  Fchoice := 0;
  FEvent_choice := nil;
  FBack_choice := TSFInt32.Create(nil, False, 'choice', 0);
  FDirty_choice := False;
  FEvent_choice := AEvent_choice;
end;

destructor TScript140Script.Destroy;
begin
  FreeAndNil(FBack_choice);
  inherited Destroy;
end;

procedure TScript140Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_choice then
  begin
    FDirty_choice := False;
    if FEvent_choice <> nil then
    begin
      FBack_choice.Value := Fchoice;
      FEvent_choice.Send(FBack_choice, Time);
    end;
  end;
end;

procedure TScript140Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script140_touchTime', {$ifdef FPC}@{$endif}TouchTime);
end;

procedure TScript140Script.Set_touchTime(const value: Single; const Time: TX3DTime);
begin
  Fchoice := 26; FDirty_choice := True;
end;

procedure TScript140Script.TouchTime(Value: TX3DField; const Time: TX3DTime);
begin
  Fchoice := 26; FDirty_choice := True;
  FlushOutputs(Time);
end;

constructor TScript145Script.Create(const AEvent_choice: TX3DEvent);
begin
  inherited Create;
  Fchoice := 0;
  FEvent_choice := nil;
  FBack_choice := TSFInt32.Create(nil, False, 'choice', 0);
  FDirty_choice := False;
  FEvent_choice := AEvent_choice;
end;

destructor TScript145Script.Destroy;
begin
  FreeAndNil(FBack_choice);
  inherited Destroy;
end;

procedure TScript145Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_choice then
  begin
    FDirty_choice := False;
    if FEvent_choice <> nil then
    begin
      FBack_choice.Value := Fchoice;
      FEvent_choice.Send(FBack_choice, Time);
    end;
  end;
end;

procedure TScript145Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script145_touchTime', {$ifdef FPC}@{$endif}TouchTime);
end;

procedure TScript145Script.Set_touchTime(const value: Single; const Time: TX3DTime);
begin
  Fchoice := 27; FDirty_choice := True;
end;

procedure TScript145Script.TouchTime(Value: TX3DField; const Time: TX3DTime);
begin
  Fchoice := 27; FDirty_choice := True;
  FlushOutputs(Time);
end;

constructor TScript150Script.Create(const AEvent_choice: TX3DEvent);
begin
  inherited Create;
  Fchoice := 0;
  FEvent_choice := nil;
  FBack_choice := TSFInt32.Create(nil, False, 'choice', 0);
  FDirty_choice := False;
  FEvent_choice := AEvent_choice;
end;

destructor TScript150Script.Destroy;
begin
  FreeAndNil(FBack_choice);
  inherited Destroy;
end;

procedure TScript150Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_choice then
  begin
    FDirty_choice := False;
    if FEvent_choice <> nil then
    begin
      FBack_choice.Value := Fchoice;
      FEvent_choice.Send(FBack_choice, Time);
    end;
  end;
end;

procedure TScript150Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script150_touchTime', {$ifdef FPC}@{$endif}TouchTime);
end;

procedure TScript150Script.Set_touchTime(const value: Single; const Time: TX3DTime);
begin
  Fchoice := 28; FDirty_choice := True;
end;

procedure TScript150Script.TouchTime(Value: TX3DField; const Time: TX3DTime);
begin
  Fchoice := 28; FDirty_choice := True;
  FlushOutputs(Time);
end;

constructor TScript155Script.Create(const AEvent_choice: TX3DEvent);
begin
  inherited Create;
  Fchoice := 0;
  FEvent_choice := nil;
  FBack_choice := TSFInt32.Create(nil, False, 'choice', 0);
  FDirty_choice := False;
  FEvent_choice := AEvent_choice;
end;

destructor TScript155Script.Destroy;
begin
  FreeAndNil(FBack_choice);
  inherited Destroy;
end;

procedure TScript155Script.FlushOutputs(const Time: TX3DTime);
begin
  if FDirty_choice then
  begin
    FDirty_choice := False;
    if FEvent_choice <> nil then
    begin
      FBack_choice.Value := Fchoice;
      FEvent_choice.Send(FBack_choice, Time);
    end;
  end;
end;

procedure TScript155Script.RegisterHandlers(const Scene: TCastleSceneCore);
begin
  Scene.RegisterCompiledScript('Script155_touchTime', {$ifdef FPC}@{$endif}TouchTime);
end;

procedure TScript155Script.Set_touchTime(const value: Single; const Time: TX3DTime);
begin
  Fchoice := 29; FDirty_choice := True;
end;

procedure TScript155Script.TouchTime(Value: TX3DField; const Time: TX3DTime);
begin
  Fchoice := 29; FDirty_choice := True;
  FlushOutputs(Time);
end;

procedure InitMenuJinPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'Menu.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := 'X3D scene with a Switch of Inlines controlled by a menu';
Group5 := TGroupNode.Create;
{ Viewpoint and any other scene setup }
Viewpoint6 := TViewpointNode.Create;
Viewpoint6.Position := Vector3(0, 20, 110);
Group5.FdChildren.Add(Viewpoint6);
Group7 := TGroupNode.Create;
Switch8 := TSwitchNode.Create;
Switch8.X3DName := 'SceneSwitcher';
Switch8.WhichChoice := 0;
Group9 := TGroupNode.Create;
Script10 := TScriptNode.Create;
Script10.X3DName := 'Choice0';
FieldVal11 := TSFTime.CreateEvent(Script10, 'touchTime', True);
Script10.AddCustomFieldOrEvent(FieldVal11);
FieldVal12 := TSFInt32.CreateEvent(Script10, 'choice', False);
Script10.AddCustomFieldOrEvent(FieldVal12);
FreeAndNil(CompiledScript10);
CompiledScript10 := TScript10Script.Create(FieldVal12);
Script10.SetUrl(['compiled:' + LineEnding +
  'touchTime=Script10_touchTime']);
Group9.FdChildren.Add(Script10);
Inline13 := TInlineNode.Create;
Inline13.X3DName := 'JinBlink';
Inline13.SetUrl(['../resources/JinBlink.x3d', 'JinBlink.x3d']);
Group9.FdChildren.Add(Inline13);
Switch8.FdChildren.Add(Group9);
Group14 := TGroupNode.Create;
Script15 := TScriptNode.Create;
Script15.X3DName := 'Choice1';
FieldVal16 := TSFTime.CreateEvent(Script15, 'touchTime', True);
Script15.AddCustomFieldOrEvent(FieldVal16);
FieldVal17 := TSFInt32.CreateEvent(Script15, 'choice', False);
Script15.AddCustomFieldOrEvent(FieldVal17);
FreeAndNil(CompiledScript15);
end;

procedure InitMenuJinPart1;
begin
CompiledScript15 := TScript15Script.Create(FieldVal17);
Script15.SetUrl(['compiled:' + LineEnding +
  'touchTime=Script15_touchTime']);
Group14.FdChildren.Add(Script15);
Inline18 := TInlineNode.Create;
Inline18.X3DName := 'JinBrowLowerer';
Inline18.SetUrl(['../resources/JinBrowLowerer.x3d', 'JinBrowLowerer.x3d']);
Group14.FdChildren.Add(Inline18);
Switch8.FdChildren.Add(Group14);
Group19 := TGroupNode.Create;
Script20 := TScriptNode.Create;
Script20.X3DName := 'Choice2';
FieldVal21 := TSFTime.CreateEvent(Script20, 'touchTime', True);
Script20.AddCustomFieldOrEvent(FieldVal21);
FieldVal22 := TSFInt32.CreateEvent(Script20, 'choice', False);
Script20.AddCustomFieldOrEvent(FieldVal22);
FreeAndNil(CompiledScript20);
CompiledScript20 := TScript20Script.Create(FieldVal22);
Script20.SetUrl(['compiled:' + LineEnding +
  'touchTime=Script20_touchTime']);
Group19.FdChildren.Add(Script20);
Inline23 := TInlineNode.Create;
Inline23.X3DName := 'JinCheekPuffer';
Inline23.SetUrl(['../resources/JinCheekPuffer.x3d', 'JinCheekPuffer.x3d']);
Group19.FdChildren.Add(Inline23);
Switch8.FdChildren.Add(Group19);
Group24 := TGroupNode.Create;
Script25 := TScriptNode.Create;
Script25.X3DName := 'Choice3';
FieldVal26 := TSFTime.CreateEvent(Script25, 'touchTime', True);
Script25.AddCustomFieldOrEvent(FieldVal26);
FieldVal27 := TSFInt32.CreateEvent(Script25, 'choice', False);
Script25.AddCustomFieldOrEvent(FieldVal27);
FreeAndNil(CompiledScript25);
CompiledScript25 := TScript25Script.Create(FieldVal27);
Script25.SetUrl(['compiled:' + LineEnding +
  'touchTime=Script25_touchTime']);
Group24.FdChildren.Add(Script25);
Inline28 := TInlineNode.Create;
Inline28.X3DName := 'JinCheekRaiser';
Inline28.SetUrl(['../resources/JinCheekRaiser.x3d', 'JinCheekRaiser.x3d']);
Group24.FdChildren.Add(Inline28);
Switch8.FdChildren.Add(Group24);
end;

procedure InitMenuJinPart2;
begin
Group29 := TGroupNode.Create;
Script30 := TScriptNode.Create;
Script30.X3DName := 'Choice4';
FieldVal31 := TSFTime.CreateEvent(Script30, 'touchTime', True);
Script30.AddCustomFieldOrEvent(FieldVal31);
FieldVal32 := TSFInt32.CreateEvent(Script30, 'choice', False);
Script30.AddCustomFieldOrEvent(FieldVal32);
FreeAndNil(CompiledScript30);
CompiledScript30 := TScript30Script.Create(FieldVal32);
Script30.SetUrl(['compiled:' + LineEnding +
  'touchTime=Script30_touchTime']);
Group29.FdChildren.Add(Script30);
Inline33 := TInlineNode.Create;
Inline33.X3DName := 'JinChinRaiser';
Inline33.SetUrl(['../resources/JinChinRaiser.x3d', 'JinChinRaiser.x3d']);
Group29.FdChildren.Add(Inline33);
Switch8.FdChildren.Add(Group29);
Group34 := TGroupNode.Create;
Script35 := TScriptNode.Create;
Script35.X3DName := 'Choice5';
FieldVal36 := TSFTime.CreateEvent(Script35, 'touchTime', True);
Script35.AddCustomFieldOrEvent(FieldVal36);
FieldVal37 := TSFInt32.CreateEvent(Script35, 'choice', False);
Script35.AddCustomFieldOrEvent(FieldVal37);
FreeAndNil(CompiledScript35);
CompiledScript35 := TScript35Script.Create(FieldVal37);
Script35.SetUrl(['compiled:' + LineEnding +
  'touchTime=Script35_touchTime']);
Group34.FdChildren.Add(Script35);
Inline38 := TInlineNode.Create;
Inline38.X3DName := 'JinDimpler';
Inline38.SetUrl(['../resources/JinDimpler.x3d', 'JinDimpler.x3d']);
Group34.FdChildren.Add(Inline38);
Switch8.FdChildren.Add(Group34);
Group39 := TGroupNode.Create;
Script40 := TScriptNode.Create;
Script40.X3DName := 'Choice6';
FieldVal41 := TSFTime.CreateEvent(Script40, 'touchTime', True);
Script40.AddCustomFieldOrEvent(FieldVal41);
FieldVal42 := TSFInt32.CreateEvent(Script40, 'choice', False);
Script40.AddCustomFieldOrEvent(FieldVal42);
FreeAndNil(CompiledScript40);
end;

procedure InitMenuJinPart3;
begin
CompiledScript40 := TScript40Script.Create(FieldVal42);
Script40.SetUrl(['compiled:' + LineEnding +
  'touchTime=Script40_touchTime']);
Group39.FdChildren.Add(Script40);
Inline43 := TInlineNode.Create;
Inline43.X3DName := 'JinEyesClosed';
Inline43.SetUrl(['../resources/JinEyesClosed.x3d', 'JinEyesClosed.x3d']);
Group39.FdChildren.Add(Inline43);
Switch8.FdChildren.Add(Group39);
Group44 := TGroupNode.Create;
Script45 := TScriptNode.Create;
Script45.X3DName := 'Choice7';
FieldVal46 := TSFTime.CreateEvent(Script45, 'touchTime', True);
Script45.AddCustomFieldOrEvent(FieldVal46);
FieldVal47 := TSFInt32.CreateEvent(Script45, 'choice', False);
Script45.AddCustomFieldOrEvent(FieldVal47);
FreeAndNil(CompiledScript45);
CompiledScript45 := TScript45Script.Create(FieldVal47);
Script45.SetUrl(['compiled:' + LineEnding +
  'touchTime=Script45_touchTime']);
Group44.FdChildren.Add(Script45);
Inline48 := TInlineNode.Create;
Inline48.X3DName := 'JinInnerBrowRaiser';
Inline48.SetUrl(['../resources/JinInnerBrowRaiser.x3d', 'JinInnerBrowRaiser.x3d']);
Group44.FdChildren.Add(Inline48);
Switch8.FdChildren.Add(Group44);
Group49 := TGroupNode.Create;
Script50 := TScriptNode.Create;
Script50.X3DName := 'Choice8';
FieldVal51 := TSFTime.CreateEvent(Script50, 'touchTime', True);
Script50.AddCustomFieldOrEvent(FieldVal51);
FieldVal52 := TSFInt32.CreateEvent(Script50, 'choice', False);
Script50.AddCustomFieldOrEvent(FieldVal52);
FreeAndNil(CompiledScript50);
CompiledScript50 := TScript50Script.Create(FieldVal52);
Script50.SetUrl(['compiled:' + LineEnding +
  'touchTime=Script50_touchTime']);
Group49.FdChildren.Add(Script50);
Inline53 := TInlineNode.Create;
Inline53.X3DName := 'JinJawDrop';
Inline53.SetUrl(['../resources/JinJawDrop.x3d', 'JinJawDrop.x3d']);
Group49.FdChildren.Add(Inline53);
Switch8.FdChildren.Add(Group49);
end;

procedure InitMenuJinPart4;
begin
Group54 := TGroupNode.Create;
Script55 := TScriptNode.Create;
Script55.X3DName := 'Choice9';
FieldVal56 := TSFTime.CreateEvent(Script55, 'touchTime', True);
Script55.AddCustomFieldOrEvent(FieldVal56);
FieldVal57 := TSFInt32.CreateEvent(Script55, 'choice', False);
Script55.AddCustomFieldOrEvent(FieldVal57);
FreeAndNil(CompiledScript55);
CompiledScript55 := TScript55Script.Create(FieldVal57);
Script55.SetUrl(['compiled:' + LineEnding +
  'touchTime=Script55_touchTime']);
Group54.FdChildren.Add(Script55);
Inline58 := TInlineNode.Create;
Inline58.X3DName := 'JinLidDroop';
Inline58.SetUrl(['../resources/JinLidDroop.x3d', 'JinLidDroop.x3d']);
Group54.FdChildren.Add(Inline58);
Switch8.FdChildren.Add(Group54);
Group59 := TGroupNode.Create;
Script60 := TScriptNode.Create;
Script60.X3DName := 'Choice10';
FieldVal61 := TSFTime.CreateEvent(Script60, 'touchTime', True);
Script60.AddCustomFieldOrEvent(FieldVal61);
FieldVal62 := TSFInt32.CreateEvent(Script60, 'choice', False);
Script60.AddCustomFieldOrEvent(FieldVal62);
FreeAndNil(CompiledScript60);
CompiledScript60 := TScript60Script.Create(FieldVal62);
Script60.SetUrl(['compiled:' + LineEnding +
  'touchTime=Script60_touchTime']);
Group59.FdChildren.Add(Script60);
Inline63 := TInlineNode.Create;
Inline63.X3DName := 'JinLidTightener';
Inline63.SetUrl(['../resources/JinLidTightener.x3d', 'JinLidTightener.x3d']);
Group59.FdChildren.Add(Inline63);
Switch8.FdChildren.Add(Group59);
Group64 := TGroupNode.Create;
Script65 := TScriptNode.Create;
Script65.X3DName := 'Choice11';
FieldVal66 := TSFTime.CreateEvent(Script65, 'touchTime', True);
Script65.AddCustomFieldOrEvent(FieldVal66);
FieldVal67 := TSFInt32.CreateEvent(Script65, 'choice', False);
Script65.AddCustomFieldOrEvent(FieldVal67);
FreeAndNil(CompiledScript65);
end;

procedure InitMenuJinPart5;
begin
CompiledScript65 := TScript65Script.Create(FieldVal67);
Script65.SetUrl(['compiled:' + LineEnding +
  'touchTime=Script65_touchTime']);
Group64.FdChildren.Add(Script65);
Inline68 := TInlineNode.Create;
Inline68.X3DName := 'JinLipCornerDepressor';
Inline68.SetUrl(['../resources/JinLipCornerDepressor.x3d', 'JinLipCornerDepressor.x3d']);
Group64.FdChildren.Add(Inline68);
Switch8.FdChildren.Add(Group64);
Group69 := TGroupNode.Create;
Script70 := TScriptNode.Create;
Script70.X3DName := 'Choice12';
FieldVal71 := TSFTime.CreateEvent(Script70, 'touchTime', True);
Script70.AddCustomFieldOrEvent(FieldVal71);
FieldVal72 := TSFInt32.CreateEvent(Script70, 'choice', False);
Script70.AddCustomFieldOrEvent(FieldVal72);
FreeAndNil(CompiledScript70);
CompiledScript70 := TScript70Script.Create(FieldVal72);
Script70.SetUrl(['compiled:' + LineEnding +
  'touchTime=Script70_touchTime']);
Group69.FdChildren.Add(Script70);
Inline73 := TInlineNode.Create;
Inline73.X3DName := 'JinLipCornerPuller';
Inline73.SetUrl(['../resources/JinLipCornerPuller.x3d', 'JinLipCornerPuller.x3d']);
Group69.FdChildren.Add(Inline73);
Switch8.FdChildren.Add(Group69);
Group74 := TGroupNode.Create;
Script75 := TScriptNode.Create;
Script75.X3DName := 'Choice13';
FieldVal76 := TSFTime.CreateEvent(Script75, 'touchTime', True);
Script75.AddCustomFieldOrEvent(FieldVal76);
FieldVal77 := TSFInt32.CreateEvent(Script75, 'choice', False);
Script75.AddCustomFieldOrEvent(FieldVal77);
FreeAndNil(CompiledScript75);
CompiledScript75 := TScript75Script.Create(FieldVal77);
Script75.SetUrl(['compiled:' + LineEnding +
  'touchTime=Script75_touchTime']);
Group74.FdChildren.Add(Script75);
Inline78 := TInlineNode.Create;
Inline78.X3DName := 'JinLipFunneler';
Inline78.SetUrl(['../resources/JinLipFunneler.x3d', 'JinLipFunneler.x3d']);
Group74.FdChildren.Add(Inline78);
Switch8.FdChildren.Add(Group74);
end;

procedure InitMenuJinPart6;
begin
Group79 := TGroupNode.Create;
Script80 := TScriptNode.Create;
Script80.X3DName := 'Choice14';
FieldVal81 := TSFTime.CreateEvent(Script80, 'touchTime', True);
Script80.AddCustomFieldOrEvent(FieldVal81);
FieldVal82 := TSFInt32.CreateEvent(Script80, 'choice', False);
Script80.AddCustomFieldOrEvent(FieldVal82);
FreeAndNil(CompiledScript80);
CompiledScript80 := TScript80Script.Create(FieldVal82);
Script80.SetUrl(['compiled:' + LineEnding +
  'touchTime=Script80_touchTime']);
Group79.FdChildren.Add(Script80);
Inline83 := TInlineNode.Create;
Inline83.X3DName := 'JinLipPressor';
Inline83.SetUrl(['../resources/JinLipPressor.x3d', 'JinLipPressor.x3d']);
Group79.FdChildren.Add(Inline83);
Switch8.FdChildren.Add(Group79);
Group84 := TGroupNode.Create;
Script85 := TScriptNode.Create;
Script85.X3DName := 'Choice15';
FieldVal86 := TSFTime.CreateEvent(Script85, 'touchTime', True);
Script85.AddCustomFieldOrEvent(FieldVal86);
FieldVal87 := TSFInt32.CreateEvent(Script85, 'choice', False);
Script85.AddCustomFieldOrEvent(FieldVal87);
FreeAndNil(CompiledScript85);
CompiledScript85 := TScript85Script.Create(FieldVal87);
Script85.SetUrl(['compiled:' + LineEnding +
  'touchTime=Script85_touchTime']);
Group84.FdChildren.Add(Script85);
Inline88 := TInlineNode.Create;
Inline88.X3DName := 'JinLipPuckerer';
Inline88.SetUrl(['../resources/JinLipPuckerer.x3d', 'JinLipPuckerer.x3d']);
Group84.FdChildren.Add(Inline88);
Switch8.FdChildren.Add(Group84);
Group89 := TGroupNode.Create;
Script90 := TScriptNode.Create;
Script90.X3DName := 'Choice16';
FieldVal91 := TSFTime.CreateEvent(Script90, 'touchTime', True);
Script90.AddCustomFieldOrEvent(FieldVal91);
FieldVal92 := TSFInt32.CreateEvent(Script90, 'choice', False);
Script90.AddCustomFieldOrEvent(FieldVal92);
FreeAndNil(CompiledScript90);
end;

procedure InitMenuJinPart7;
begin
CompiledScript90 := TScript90Script.Create(FieldVal92);
Script90.SetUrl(['compiled:' + LineEnding +
  'touchTime=Script90_touchTime']);
Group89.FdChildren.Add(Script90);
Inline93 := TInlineNode.Create;
Inline93.X3DName := 'JinLipsPart';
Inline93.SetUrl(['../resources/JinLipsPart.x3d', 'JinLipsPart.x3d']);
Group89.FdChildren.Add(Inline93);
Switch8.FdChildren.Add(Group89);
Group94 := TGroupNode.Create;
Script95 := TScriptNode.Create;
Script95.X3DName := 'Choice17';
FieldVal96 := TSFTime.CreateEvent(Script95, 'touchTime', True);
Script95.AddCustomFieldOrEvent(FieldVal96);
FieldVal97 := TSFInt32.CreateEvent(Script95, 'choice', False);
Script95.AddCustomFieldOrEvent(FieldVal97);
FreeAndNil(CompiledScript95);
CompiledScript95 := TScript95Script.Create(FieldVal97);
Script95.SetUrl(['compiled:' + LineEnding +
  'touchTime=Script95_touchTime']);
Group94.FdChildren.Add(Script95);
Inline98 := TInlineNode.Create;
Inline98.X3DName := 'JinLipStretcher';
Inline98.SetUrl(['../resources/JinLipStretcher.x3d', 'JinLipStretcher.x3d']);
Group94.FdChildren.Add(Inline98);
Switch8.FdChildren.Add(Group94);
Group99 := TGroupNode.Create;
Script100 := TScriptNode.Create;
Script100.X3DName := 'Choice18';
FieldVal101 := TSFTime.CreateEvent(Script100, 'touchTime', True);
Script100.AddCustomFieldOrEvent(FieldVal101);
FieldVal102 := TSFInt32.CreateEvent(Script100, 'choice', False);
Script100.AddCustomFieldOrEvent(FieldVal102);
FreeAndNil(CompiledScript100);
CompiledScript100 := TScript100Script.Create(FieldVal102);
Script100.SetUrl(['compiled:' + LineEnding +
  'touchTime=Script100_touchTime']);
Group99.FdChildren.Add(Script100);
Inline103 := TInlineNode.Create;
Inline103.X3DName := 'JinLipSuck';
Inline103.SetUrl(['../resources/JinLipSuck.x3d', 'JinLipSuck.x3d']);
Group99.FdChildren.Add(Inline103);
Switch8.FdChildren.Add(Group99);
end;

procedure InitMenuJinPart8;
begin
Group104 := TGroupNode.Create;
Script105 := TScriptNode.Create;
Script105.X3DName := 'Choice19';
FieldVal106 := TSFTime.CreateEvent(Script105, 'touchTime', True);
Script105.AddCustomFieldOrEvent(FieldVal106);
FieldVal107 := TSFInt32.CreateEvent(Script105, 'choice', False);
Script105.AddCustomFieldOrEvent(FieldVal107);
FreeAndNil(CompiledScript105);
CompiledScript105 := TScript105Script.Create(FieldVal107);
Script105.SetUrl(['compiled:' + LineEnding +
  'touchTime=Script105_touchTime']);
Group104.FdChildren.Add(Script105);
Inline108 := TInlineNode.Create;
Inline108.X3DName := 'JinLipTightener';
Inline108.SetUrl(['../resources/JinLipTightener.x3d', 'JinLipTightener.x3d']);
Group104.FdChildren.Add(Inline108);
Switch8.FdChildren.Add(Group104);
Group109 := TGroupNode.Create;
Script110 := TScriptNode.Create;
Script110.X3DName := 'Choice20';
FieldVal111 := TSFTime.CreateEvent(Script110, 'touchTime', True);
Script110.AddCustomFieldOrEvent(FieldVal111);
FieldVal112 := TSFInt32.CreateEvent(Script110, 'choice', False);
Script110.AddCustomFieldOrEvent(FieldVal112);
FreeAndNil(CompiledScript110);
CompiledScript110 := TScript110Script.Create(FieldVal112);
Script110.SetUrl(['compiled:' + LineEnding +
  'touchTime=Script110_touchTime']);
Group109.FdChildren.Add(Script110);
Inline113 := TInlineNode.Create;
Inline113.X3DName := 'JinLowerLipDepressor';
Inline113.SetUrl(['../resources/JinLowerLipDepressor.x3d', 'JinLowerLipDepressor.x3d']);
Group109.FdChildren.Add(Inline113);
Switch8.FdChildren.Add(Group109);
Group114 := TGroupNode.Create;
Script115 := TScriptNode.Create;
Script115.X3DName := 'Choice21';
FieldVal116 := TSFTime.CreateEvent(Script115, 'touchTime', True);
Script115.AddCustomFieldOrEvent(FieldVal116);
FieldVal117 := TSFInt32.CreateEvent(Script115, 'choice', False);
Script115.AddCustomFieldOrEvent(FieldVal117);
FreeAndNil(CompiledScript115);
end;

procedure InitMenuJinPart9;
begin
CompiledScript115 := TScript115Script.Create(FieldVal117);
Script115.SetUrl(['compiled:' + LineEnding +
  'touchTime=Script115_touchTime']);
Group114.FdChildren.Add(Script115);
Inline118 := TInlineNode.Create;
Inline118.X3DName := 'JinMouthStretch';
Inline118.SetUrl(['../resources/JinMouthStretch.x3d', 'JinMouthStretch.x3d']);
Group114.FdChildren.Add(Inline118);
Switch8.FdChildren.Add(Group114);
Group119 := TGroupNode.Create;
Script120 := TScriptNode.Create;
Script120.X3DName := 'Choice22';
FieldVal121 := TSFTime.CreateEvent(Script120, 'touchTime', True);
Script120.AddCustomFieldOrEvent(FieldVal121);
FieldVal122 := TSFInt32.CreateEvent(Script120, 'choice', False);
Script120.AddCustomFieldOrEvent(FieldVal122);
FreeAndNil(CompiledScript120);
CompiledScript120 := TScript120Script.Create(FieldVal122);
Script120.SetUrl(['compiled:' + LineEnding +
  'touchTime=Script120_touchTime']);
Group119.FdChildren.Add(Script120);
Inline123 := TInlineNode.Create;
Inline123.X3DName := 'JinNasolabialDeepener';
Inline123.SetUrl(['../resources/JinNasolabialDeepener.x3d', 'JinNasolabialDeepener.x3d']);
Group119.FdChildren.Add(Inline123);
Switch8.FdChildren.Add(Group119);
Group124 := TGroupNode.Create;
Script125 := TScriptNode.Create;
Script125.X3DName := 'Choice23';
FieldVal126 := TSFTime.CreateEvent(Script125, 'touchTime', True);
Script125.AddCustomFieldOrEvent(FieldVal126);
FieldVal127 := TSFInt32.CreateEvent(Script125, 'choice', False);
Script125.AddCustomFieldOrEvent(FieldVal127);
FreeAndNil(CompiledScript125);
CompiledScript125 := TScript125Script.Create(FieldVal127);
Script125.SetUrl(['compiled:' + LineEnding +
  'touchTime=Script125_touchTime']);
Group124.FdChildren.Add(Script125);
Inline128 := TInlineNode.Create;
Inline128.X3DName := 'JinNoseWrinkler';
Inline128.SetUrl(['../resources/JinNoseWrinkler.x3d', 'JinNoseWrinkler.x3d']);
Group124.FdChildren.Add(Inline128);
Switch8.FdChildren.Add(Group124);
end;

procedure InitMenuJinPart10;
begin
Group129 := TGroupNode.Create;
Script130 := TScriptNode.Create;
Script130.X3DName := 'Choice24';
FieldVal131 := TSFTime.CreateEvent(Script130, 'touchTime', True);
Script130.AddCustomFieldOrEvent(FieldVal131);
FieldVal132 := TSFInt32.CreateEvent(Script130, 'choice', False);
Script130.AddCustomFieldOrEvent(FieldVal132);
FreeAndNil(CompiledScript130);
CompiledScript130 := TScript130Script.Create(FieldVal132);
Script130.SetUrl(['compiled:' + LineEnding +
  'touchTime=Script130_touchTime']);
Group129.FdChildren.Add(Script130);
Inline133 := TInlineNode.Create;
Inline133.X3DName := 'JinOuterBrowRaiser';
Inline133.SetUrl(['../resources/JinOuterBrowRaiser.x3d', 'JinOuterBrowRaiser.x3d']);
Group129.FdChildren.Add(Inline133);
Switch8.FdChildren.Add(Group129);
Group134 := TGroupNode.Create;
Script135 := TScriptNode.Create;
Script135.X3DName := 'Choice25';
FieldVal136 := TSFTime.CreateEvent(Script135, 'touchTime', True);
Script135.AddCustomFieldOrEvent(FieldVal136);
FieldVal137 := TSFInt32.CreateEvent(Script135, 'choice', False);
Script135.AddCustomFieldOrEvent(FieldVal137);
FreeAndNil(CompiledScript135);
CompiledScript135 := TScript135Script.Create(FieldVal137);
Script135.SetUrl(['compiled:' + LineEnding +
  'touchTime=Script135_touchTime']);
Group134.FdChildren.Add(Script135);
Inline138 := TInlineNode.Create;
Inline138.X3DName := 'JinSlit';
Inline138.SetUrl(['../resources/JinSlit.x3d', 'JinSlit.x3d']);
Group134.FdChildren.Add(Inline138);
Switch8.FdChildren.Add(Group134);
Group139 := TGroupNode.Create;
Script140 := TScriptNode.Create;
Script140.X3DName := 'Choice26';
FieldVal141 := TSFTime.CreateEvent(Script140, 'touchTime', True);
Script140.AddCustomFieldOrEvent(FieldVal141);
FieldVal142 := TSFInt32.CreateEvent(Script140, 'choice', False);
Script140.AddCustomFieldOrEvent(FieldVal142);
FreeAndNil(CompiledScript140);
end;

procedure InitMenuJinPart11;
begin
CompiledScript140 := TScript140Script.Create(FieldVal142);
Script140.SetUrl(['compiled:' + LineEnding +
  'touchTime=Script140_touchTime']);
Group139.FdChildren.Add(Script140);
Inline143 := TInlineNode.Create;
Inline143.X3DName := 'JinSquint';
Inline143.SetUrl(['../resources/JinSquint.x3d', 'JinSquint.x3d']);
Group139.FdChildren.Add(Inline143);
Switch8.FdChildren.Add(Group139);
Group144 := TGroupNode.Create;
Script145 := TScriptNode.Create;
Script145.X3DName := 'Choice27';
FieldVal146 := TSFTime.CreateEvent(Script145, 'touchTime', True);
Script145.AddCustomFieldOrEvent(FieldVal146);
FieldVal147 := TSFInt32.CreateEvent(Script145, 'choice', False);
Script145.AddCustomFieldOrEvent(FieldVal147);
FreeAndNil(CompiledScript145);
CompiledScript145 := TScript145Script.Create(FieldVal147);
Script145.SetUrl(['compiled:' + LineEnding +
  'touchTime=Script145_touchTime']);
Group144.FdChildren.Add(Script145);
Inline148 := TInlineNode.Create;
Inline148.X3DName := 'JinUpperLidRaiser';
Inline148.SetUrl(['../resources/JinUpperLidRaiser.x3d', 'JinUpperLidRaiser.x3d']);
Group144.FdChildren.Add(Inline148);
Switch8.FdChildren.Add(Group144);
Group149 := TGroupNode.Create;
Script150 := TScriptNode.Create;
Script150.X3DName := 'Choice28';
FieldVal151 := TSFTime.CreateEvent(Script150, 'touchTime', True);
Script150.AddCustomFieldOrEvent(FieldVal151);
FieldVal152 := TSFInt32.CreateEvent(Script150, 'choice', False);
Script150.AddCustomFieldOrEvent(FieldVal152);
FreeAndNil(CompiledScript150);
CompiledScript150 := TScript150Script.Create(FieldVal152);
Script150.SetUrl(['compiled:' + LineEnding +
  'touchTime=Script150_touchTime']);
Group149.FdChildren.Add(Script150);
Inline153 := TInlineNode.Create;
Inline153.X3DName := 'JinUpperLipRaiser';
Inline153.SetUrl(['../resources/JinUpperLipRaiser.x3d', 'JinUpperLipRaiser.x3d']);
Group149.FdChildren.Add(Inline153);
Switch8.FdChildren.Add(Group149);
end;

procedure InitMenuJinPart12;
begin
Group154 := TGroupNode.Create;
Script155 := TScriptNode.Create;
Script155.X3DName := 'Choice29';
FieldVal156 := TSFTime.CreateEvent(Script155, 'touchTime', True);
Script155.AddCustomFieldOrEvent(FieldVal156);
FieldVal157 := TSFInt32.CreateEvent(Script155, 'choice', False);
Script155.AddCustomFieldOrEvent(FieldVal157);
FreeAndNil(CompiledScript155);
CompiledScript155 := TScript155Script.Create(FieldVal157);
Script155.SetUrl(['compiled:' + LineEnding +
  'touchTime=Script155_touchTime']);
Group154.FdChildren.Add(Script155);
Inline158 := TInlineNode.Create;
Inline158.X3DName := 'JinWink';
Inline158.SetUrl(['../resources/JinWink.x3d', 'JinWink.x3d']);
Group154.FdChildren.Add(Inline158);
Switch8.FdChildren.Add(Group154);
Group7.FdChildren.Add(Switch8);
Transform159 := TTransformNode.Create;
Transform159.Translation := Vector3(48, 63.4, 0);
TouchSensor160 := TTouchSensorNode.Create;
TouchSensor160.Description := 'TSJinBlink';
TouchSensor160.X3DName := 'JinBlink_Sensor';
Transform159.FdChildren.Add(TouchSensor160);
Shape161 := TShapeNode.Create;
Appearance162 := TAppearanceNode.Create;
Material163 := TMaterialNode.Create;
Material163.DiffuseColor := Vector3(1, 1, 1);
Appearance162.Material := Material163;
Shape161.Appearance := Appearance162;
Text164 := TTextNode.Create;
Text164.SetText(['JinBlink']);
FontStyle165 := TFontStyleNode.Create;
FontStyle165.Size := 2.4;
FontStyle165.Spacing := 1.2;
FontStyle165.Justify := fjMiddle;
FontStyle165.JustifyMinor := fjMiddle;
Text164.FontStyle := FontStyle165;
Shape161.Geometry := Text164;
Transform159.FdChildren.Add(Shape161);
Shape166 := TShapeNode.Create;
end;

procedure InitMenuJinPart13;
begin
Appearance167 := TAppearanceNode.Create;
Material168 := TMaterialNode.Create;
Material168.DiffuseColor := Vector3(0, 0, 1);
Appearance167.Material := Material168;
Shape166.Appearance := Appearance167;
IndexedFaceSet169 := TIndexedFaceSetNode.Create;
IndexedFaceSet169.SetCoordIndex([0, 1, 2, 3, -1]);
Coordinate170 := TCoordinateNode.Create;
Coordinate170.SetPoint([Vector3(20, 1.3833333333333333, -0.1), Vector3(-20, 1.3833333333333333, -0.1), Vector3(-20, -1.616666666666667, -0.1), Vector3(20, -1.616666666666667, -0.1)]);
IndexedFaceSet169.Coord := Coordinate170;
Shape166.Geometry := IndexedFaceSet169;
Transform159.FdChildren.Add(Shape166);
Group7.FdChildren.Add(Transform159);
{ ROUTE JinBlink_Sensor.touchTime TO Choice0.touchTime }
Group7.AddRoute(TouchSensor160.EventTouchTime, FieldVal11);
{ ROUTE Choice0.choice TO SceneSwitcher.whichChoice }
Group7.AddRoute(FieldVal12, Switch8.whichChoice);
Transform173 := TTransformNode.Create;
Transform173.Translation := Vector3(48, 60.4, 0);
TouchSensor174 := TTouchSensorNode.Create;
TouchSensor174.Description := 'TSJinBrowLowerer';
TouchSensor174.X3DName := 'JinBrowLowerer_Sensor';
Transform173.FdChildren.Add(TouchSensor174);
Shape175 := TShapeNode.Create;
Appearance176 := TAppearanceNode.Create;
Material177 := TMaterialNode.Create;
Material177.DiffuseColor := Vector3(1, 1, 1);
Appearance176.Material := Material177;
Shape175.Appearance := Appearance176;
Text178 := TTextNode.Create;
Text178.SetText(['JinBrowLowerer']);
FontStyle179 := TFontStyleNode.Create;
FontStyle179.Size := 2.4;
FontStyle179.Spacing := 1.2;
FontStyle179.Justify := fjMiddle;
FontStyle179.JustifyMinor := fjMiddle;
Text178.FontStyle := FontStyle179;
Shape175.Geometry := Text178;
Transform173.FdChildren.Add(Shape175);
Shape180 := TShapeNode.Create;
end;

procedure InitMenuJinPart14;
begin
Appearance181 := TAppearanceNode.Create;
Material182 := TMaterialNode.Create;
Material182.DiffuseColor := Vector3(0, 0, 1);
Appearance181.Material := Material182;
Shape180.Appearance := Appearance181;
IndexedFaceSet183 := TIndexedFaceSetNode.Create;
IndexedFaceSet183.SetCoordIndex([0, 1, 2, 3, -1]);
Coordinate184 := TCoordinateNode.Create;
Coordinate184.SetPoint([Vector3(20, 1.3833333333333333, -0.1), Vector3(-20, 1.3833333333333333, -0.1), Vector3(-20, -1.616666666666667, -0.1), Vector3(20, -1.616666666666667, -0.1)]);
IndexedFaceSet183.Coord := Coordinate184;
Shape180.Geometry := IndexedFaceSet183;
Transform173.FdChildren.Add(Shape180);
Group7.FdChildren.Add(Transform173);
{ ROUTE JinBrowLowerer_Sensor.touchTime TO Choice1.touchTime }
Group7.AddRoute(TouchSensor174.EventTouchTime, FieldVal16);
{ ROUTE Choice1.choice TO SceneSwitcher.whichChoice }
Group7.AddRoute(FieldVal17, Switch8.whichChoice);
Transform187 := TTransformNode.Create;
Transform187.Translation := Vector3(48, 57.39999999999999, 0);
TouchSensor188 := TTouchSensorNode.Create;
TouchSensor188.Description := 'TSJinCheekPuffer';
TouchSensor188.X3DName := 'JinCheekPuffer_Sensor';
Transform187.FdChildren.Add(TouchSensor188);
Shape189 := TShapeNode.Create;
Appearance190 := TAppearanceNode.Create;
Material191 := TMaterialNode.Create;
Material191.DiffuseColor := Vector3(1, 1, 1);
Appearance190.Material := Material191;
Shape189.Appearance := Appearance190;
Text192 := TTextNode.Create;
Text192.SetText(['JinCheekPuffer']);
FontStyle193 := TFontStyleNode.Create;
FontStyle193.Size := 2.4;
FontStyle193.Spacing := 1.2;
FontStyle193.Justify := fjMiddle;
FontStyle193.JustifyMinor := fjMiddle;
Text192.FontStyle := FontStyle193;
Shape189.Geometry := Text192;
Transform187.FdChildren.Add(Shape189);
Shape194 := TShapeNode.Create;
end;

procedure InitMenuJinPart15;
begin
Appearance195 := TAppearanceNode.Create;
Material196 := TMaterialNode.Create;
Material196.DiffuseColor := Vector3(0, 0, 1);
Appearance195.Material := Material196;
Shape194.Appearance := Appearance195;
IndexedFaceSet197 := TIndexedFaceSetNode.Create;
IndexedFaceSet197.SetCoordIndex([0, 1, 2, 3, -1]);
Coordinate198 := TCoordinateNode.Create;
Coordinate198.SetPoint([Vector3(20, 1.3833333333333333, -0.1), Vector3(-20, 1.3833333333333333, -0.1), Vector3(-20, -1.616666666666667, -0.1), Vector3(20, -1.616666666666667, -0.1)]);
IndexedFaceSet197.Coord := Coordinate198;
Shape194.Geometry := IndexedFaceSet197;
Transform187.FdChildren.Add(Shape194);
Group7.FdChildren.Add(Transform187);
{ ROUTE JinCheekPuffer_Sensor.touchTime TO Choice2.touchTime }
Group7.AddRoute(TouchSensor188.EventTouchTime, FieldVal21);
{ ROUTE Choice2.choice TO SceneSwitcher.whichChoice }
Group7.AddRoute(FieldVal22, Switch8.whichChoice);
Transform201 := TTransformNode.Create;
Transform201.Translation := Vector3(48, 54.39999999999999, 0);
TouchSensor202 := TTouchSensorNode.Create;
TouchSensor202.Description := 'TSJinCheekRaiser';
TouchSensor202.X3DName := 'JinCheekRaiser_Sensor';
Transform201.FdChildren.Add(TouchSensor202);
Shape203 := TShapeNode.Create;
Appearance204 := TAppearanceNode.Create;
Material205 := TMaterialNode.Create;
Material205.DiffuseColor := Vector3(1, 1, 1);
Appearance204.Material := Material205;
Shape203.Appearance := Appearance204;
Text206 := TTextNode.Create;
Text206.SetText(['JinCheekRaiser']);
FontStyle207 := TFontStyleNode.Create;
FontStyle207.Size := 2.4;
FontStyle207.Spacing := 1.2;
FontStyle207.Justify := fjMiddle;
FontStyle207.JustifyMinor := fjMiddle;
Text206.FontStyle := FontStyle207;
Shape203.Geometry := Text206;
Transform201.FdChildren.Add(Shape203);
Shape208 := TShapeNode.Create;
end;

procedure InitMenuJinPart16;
begin
Appearance209 := TAppearanceNode.Create;
Material210 := TMaterialNode.Create;
Material210.DiffuseColor := Vector3(0, 0, 1);
Appearance209.Material := Material210;
Shape208.Appearance := Appearance209;
IndexedFaceSet211 := TIndexedFaceSetNode.Create;
IndexedFaceSet211.SetCoordIndex([0, 1, 2, 3, -1]);
Coordinate212 := TCoordinateNode.Create;
Coordinate212.SetPoint([Vector3(20, 1.3833333333333333, -0.1), Vector3(-20, 1.3833333333333333, -0.1), Vector3(-20, -1.616666666666667, -0.1), Vector3(20, -1.616666666666667, -0.1)]);
IndexedFaceSet211.Coord := Coordinate212;
Shape208.Geometry := IndexedFaceSet211;
Transform201.FdChildren.Add(Shape208);
Group7.FdChildren.Add(Transform201);
{ ROUTE JinCheekRaiser_Sensor.touchTime TO Choice3.touchTime }
Group7.AddRoute(TouchSensor202.EventTouchTime, FieldVal26);
{ ROUTE Choice3.choice TO SceneSwitcher.whichChoice }
Group7.AddRoute(FieldVal27, Switch8.whichChoice);
Transform215 := TTransformNode.Create;
Transform215.Translation := Vector3(48, 51.39999999999999, 0);
TouchSensor216 := TTouchSensorNode.Create;
TouchSensor216.Description := 'TSJinChinRaiser';
TouchSensor216.X3DName := 'JinChinRaiser_Sensor';
Transform215.FdChildren.Add(TouchSensor216);
Shape217 := TShapeNode.Create;
Appearance218 := TAppearanceNode.Create;
Material219 := TMaterialNode.Create;
Material219.DiffuseColor := Vector3(1, 1, 1);
Appearance218.Material := Material219;
Shape217.Appearance := Appearance218;
Text220 := TTextNode.Create;
Text220.SetText(['JinChinRaiser']);
FontStyle221 := TFontStyleNode.Create;
FontStyle221.Size := 2.4;
FontStyle221.Spacing := 1.2;
FontStyle221.Justify := fjMiddle;
FontStyle221.JustifyMinor := fjMiddle;
Text220.FontStyle := FontStyle221;
Shape217.Geometry := Text220;
Transform215.FdChildren.Add(Shape217);
Shape222 := TShapeNode.Create;
end;

procedure InitMenuJinPart17;
begin
Appearance223 := TAppearanceNode.Create;
Material224 := TMaterialNode.Create;
Material224.DiffuseColor := Vector3(0, 0, 1);
Appearance223.Material := Material224;
Shape222.Appearance := Appearance223;
IndexedFaceSet225 := TIndexedFaceSetNode.Create;
IndexedFaceSet225.SetCoordIndex([0, 1, 2, 3, -1]);
Coordinate226 := TCoordinateNode.Create;
Coordinate226.SetPoint([Vector3(20, 1.3833333333333333, -0.1), Vector3(-20, 1.3833333333333333, -0.1), Vector3(-20, -1.616666666666667, -0.1), Vector3(20, -1.616666666666667, -0.1)]);
IndexedFaceSet225.Coord := Coordinate226;
Shape222.Geometry := IndexedFaceSet225;
Transform215.FdChildren.Add(Shape222);
Group7.FdChildren.Add(Transform215);
{ ROUTE JinChinRaiser_Sensor.touchTime TO Choice4.touchTime }
Group7.AddRoute(TouchSensor216.EventTouchTime, FieldVal31);
{ ROUTE Choice4.choice TO SceneSwitcher.whichChoice }
Group7.AddRoute(FieldVal32, Switch8.whichChoice);
Transform229 := TTransformNode.Create;
Transform229.Translation := Vector3(48, 48.39999999999999, 0);
TouchSensor230 := TTouchSensorNode.Create;
TouchSensor230.Description := 'TSJinDimpler';
TouchSensor230.X3DName := 'JinDimpler_Sensor';
Transform229.FdChildren.Add(TouchSensor230);
Shape231 := TShapeNode.Create;
Appearance232 := TAppearanceNode.Create;
Material233 := TMaterialNode.Create;
Material233.DiffuseColor := Vector3(1, 1, 1);
Appearance232.Material := Material233;
Shape231.Appearance := Appearance232;
Text234 := TTextNode.Create;
Text234.SetText(['JinDimpler']);
FontStyle235 := TFontStyleNode.Create;
FontStyle235.Size := 2.4;
FontStyle235.Spacing := 1.2;
FontStyle235.Justify := fjMiddle;
FontStyle235.JustifyMinor := fjMiddle;
Text234.FontStyle := FontStyle235;
Shape231.Geometry := Text234;
Transform229.FdChildren.Add(Shape231);
Shape236 := TShapeNode.Create;
end;

procedure InitMenuJinPart18;
begin
Appearance237 := TAppearanceNode.Create;
Material238 := TMaterialNode.Create;
Material238.DiffuseColor := Vector3(0, 0, 1);
Appearance237.Material := Material238;
Shape236.Appearance := Appearance237;
IndexedFaceSet239 := TIndexedFaceSetNode.Create;
IndexedFaceSet239.SetCoordIndex([0, 1, 2, 3, -1]);
Coordinate240 := TCoordinateNode.Create;
Coordinate240.SetPoint([Vector3(20, 1.3833333333333333, -0.1), Vector3(-20, 1.3833333333333333, -0.1), Vector3(-20, -1.616666666666667, -0.1), Vector3(20, -1.616666666666667, -0.1)]);
IndexedFaceSet239.Coord := Coordinate240;
Shape236.Geometry := IndexedFaceSet239;
Transform229.FdChildren.Add(Shape236);
Group7.FdChildren.Add(Transform229);
{ ROUTE JinDimpler_Sensor.touchTime TO Choice5.touchTime }
Group7.AddRoute(TouchSensor230.EventTouchTime, FieldVal36);
{ ROUTE Choice5.choice TO SceneSwitcher.whichChoice }
Group7.AddRoute(FieldVal37, Switch8.whichChoice);
Transform243 := TTransformNode.Create;
Transform243.Translation := Vector3(48, 45.39999999999999, 0);
TouchSensor244 := TTouchSensorNode.Create;
TouchSensor244.Description := 'TSJinEyesClosed';
TouchSensor244.X3DName := 'JinEyesClosed_Sensor';
Transform243.FdChildren.Add(TouchSensor244);
Shape245 := TShapeNode.Create;
Appearance246 := TAppearanceNode.Create;
Material247 := TMaterialNode.Create;
Material247.DiffuseColor := Vector3(1, 1, 1);
Appearance246.Material := Material247;
Shape245.Appearance := Appearance246;
Text248 := TTextNode.Create;
Text248.SetText(['JinEyesClosed']);
FontStyle249 := TFontStyleNode.Create;
FontStyle249.Size := 2.4;
FontStyle249.Spacing := 1.2;
FontStyle249.Justify := fjMiddle;
FontStyle249.JustifyMinor := fjMiddle;
Text248.FontStyle := FontStyle249;
Shape245.Geometry := Text248;
Transform243.FdChildren.Add(Shape245);
Shape250 := TShapeNode.Create;
end;

procedure InitMenuJinPart19;
begin
Appearance251 := TAppearanceNode.Create;
Material252 := TMaterialNode.Create;
Material252.DiffuseColor := Vector3(0, 0, 1);
Appearance251.Material := Material252;
Shape250.Appearance := Appearance251;
IndexedFaceSet253 := TIndexedFaceSetNode.Create;
IndexedFaceSet253.SetCoordIndex([0, 1, 2, 3, -1]);
Coordinate254 := TCoordinateNode.Create;
Coordinate254.SetPoint([Vector3(20, 1.3833333333333333, -0.1), Vector3(-20, 1.3833333333333333, -0.1), Vector3(-20, -1.616666666666667, -0.1), Vector3(20, -1.616666666666667, -0.1)]);
IndexedFaceSet253.Coord := Coordinate254;
Shape250.Geometry := IndexedFaceSet253;
Transform243.FdChildren.Add(Shape250);
Group7.FdChildren.Add(Transform243);
{ ROUTE JinEyesClosed_Sensor.touchTime TO Choice6.touchTime }
Group7.AddRoute(TouchSensor244.EventTouchTime, FieldVal41);
{ ROUTE Choice6.choice TO SceneSwitcher.whichChoice }
Group7.AddRoute(FieldVal42, Switch8.whichChoice);
Transform257 := TTransformNode.Create;
Transform257.Translation := Vector3(48, 42.39999999999999, 0);
TouchSensor258 := TTouchSensorNode.Create;
TouchSensor258.Description := 'TSJinInnerBrowRaiser';
TouchSensor258.X3DName := 'JinInnerBrowRaiser_Sensor';
Transform257.FdChildren.Add(TouchSensor258);
Shape259 := TShapeNode.Create;
Appearance260 := TAppearanceNode.Create;
Material261 := TMaterialNode.Create;
Material261.DiffuseColor := Vector3(1, 1, 1);
Appearance260.Material := Material261;
Shape259.Appearance := Appearance260;
Text262 := TTextNode.Create;
Text262.SetText(['JinInnerBrowRaiser']);
FontStyle263 := TFontStyleNode.Create;
FontStyle263.Size := 2.4;
FontStyle263.Spacing := 1.2;
FontStyle263.Justify := fjMiddle;
FontStyle263.JustifyMinor := fjMiddle;
Text262.FontStyle := FontStyle263;
Shape259.Geometry := Text262;
Transform257.FdChildren.Add(Shape259);
Shape264 := TShapeNode.Create;
end;

procedure InitMenuJinPart20;
begin
Appearance265 := TAppearanceNode.Create;
Material266 := TMaterialNode.Create;
Material266.DiffuseColor := Vector3(0, 0, 1);
Appearance265.Material := Material266;
Shape264.Appearance := Appearance265;
IndexedFaceSet267 := TIndexedFaceSetNode.Create;
IndexedFaceSet267.SetCoordIndex([0, 1, 2, 3, -1]);
Coordinate268 := TCoordinateNode.Create;
Coordinate268.SetPoint([Vector3(20, 1.3833333333333333, -0.1), Vector3(-20, 1.3833333333333333, -0.1), Vector3(-20, -1.616666666666667, -0.1), Vector3(20, -1.616666666666667, -0.1)]);
IndexedFaceSet267.Coord := Coordinate268;
Shape264.Geometry := IndexedFaceSet267;
Transform257.FdChildren.Add(Shape264);
Group7.FdChildren.Add(Transform257);
{ ROUTE JinInnerBrowRaiser_Sensor.touchTime TO Choice7.touchTime }
Group7.AddRoute(TouchSensor258.EventTouchTime, FieldVal46);
{ ROUTE Choice7.choice TO SceneSwitcher.whichChoice }
Group7.AddRoute(FieldVal47, Switch8.whichChoice);
Transform271 := TTransformNode.Create;
Transform271.Translation := Vector3(48, 39.39999999999999, 0);
TouchSensor272 := TTouchSensorNode.Create;
TouchSensor272.Description := 'TSJinJawDrop';
TouchSensor272.X3DName := 'JinJawDrop_Sensor';
Transform271.FdChildren.Add(TouchSensor272);
Shape273 := TShapeNode.Create;
Appearance274 := TAppearanceNode.Create;
Material275 := TMaterialNode.Create;
Material275.DiffuseColor := Vector3(1, 1, 1);
Appearance274.Material := Material275;
Shape273.Appearance := Appearance274;
Text276 := TTextNode.Create;
Text276.SetText(['JinJawDrop']);
FontStyle277 := TFontStyleNode.Create;
FontStyle277.Size := 2.4;
FontStyle277.Spacing := 1.2;
FontStyle277.Justify := fjMiddle;
FontStyle277.JustifyMinor := fjMiddle;
Text276.FontStyle := FontStyle277;
Shape273.Geometry := Text276;
Transform271.FdChildren.Add(Shape273);
Shape278 := TShapeNode.Create;
end;

procedure InitMenuJinPart21;
begin
Appearance279 := TAppearanceNode.Create;
Material280 := TMaterialNode.Create;
Material280.DiffuseColor := Vector3(0, 0, 1);
Appearance279.Material := Material280;
Shape278.Appearance := Appearance279;
IndexedFaceSet281 := TIndexedFaceSetNode.Create;
IndexedFaceSet281.SetCoordIndex([0, 1, 2, 3, -1]);
Coordinate282 := TCoordinateNode.Create;
Coordinate282.SetPoint([Vector3(20, 1.3833333333333333, -0.1), Vector3(-20, 1.3833333333333333, -0.1), Vector3(-20, -1.616666666666667, -0.1), Vector3(20, -1.616666666666667, -0.1)]);
IndexedFaceSet281.Coord := Coordinate282;
Shape278.Geometry := IndexedFaceSet281;
Transform271.FdChildren.Add(Shape278);
Group7.FdChildren.Add(Transform271);
{ ROUTE JinJawDrop_Sensor.touchTime TO Choice8.touchTime }
Group7.AddRoute(TouchSensor272.EventTouchTime, FieldVal51);
{ ROUTE Choice8.choice TO SceneSwitcher.whichChoice }
Group7.AddRoute(FieldVal52, Switch8.whichChoice);
Transform285 := TTransformNode.Create;
Transform285.Translation := Vector3(48, 36.39999999999999, 0);
TouchSensor286 := TTouchSensorNode.Create;
TouchSensor286.Description := 'TSJinLidDroop';
TouchSensor286.X3DName := 'JinLidDroop_Sensor';
Transform285.FdChildren.Add(TouchSensor286);
Shape287 := TShapeNode.Create;
Appearance288 := TAppearanceNode.Create;
Material289 := TMaterialNode.Create;
Material289.DiffuseColor := Vector3(1, 1, 1);
Appearance288.Material := Material289;
Shape287.Appearance := Appearance288;
Text290 := TTextNode.Create;
Text290.SetText(['JinLidDroop']);
FontStyle291 := TFontStyleNode.Create;
FontStyle291.Size := 2.4;
FontStyle291.Spacing := 1.2;
FontStyle291.Justify := fjMiddle;
FontStyle291.JustifyMinor := fjMiddle;
Text290.FontStyle := FontStyle291;
Shape287.Geometry := Text290;
Transform285.FdChildren.Add(Shape287);
Shape292 := TShapeNode.Create;
end;

procedure InitMenuJinPart22;
begin
Appearance293 := TAppearanceNode.Create;
Material294 := TMaterialNode.Create;
Material294.DiffuseColor := Vector3(0, 0, 1);
Appearance293.Material := Material294;
Shape292.Appearance := Appearance293;
IndexedFaceSet295 := TIndexedFaceSetNode.Create;
IndexedFaceSet295.SetCoordIndex([0, 1, 2, 3, -1]);
Coordinate296 := TCoordinateNode.Create;
Coordinate296.SetPoint([Vector3(20, 1.3833333333333333, -0.1), Vector3(-20, 1.3833333333333333, -0.1), Vector3(-20, -1.616666666666667, -0.1), Vector3(20, -1.616666666666667, -0.1)]);
IndexedFaceSet295.Coord := Coordinate296;
Shape292.Geometry := IndexedFaceSet295;
Transform285.FdChildren.Add(Shape292);
Group7.FdChildren.Add(Transform285);
{ ROUTE JinLidDroop_Sensor.touchTime TO Choice9.touchTime }
Group7.AddRoute(TouchSensor286.EventTouchTime, FieldVal56);
{ ROUTE Choice9.choice TO SceneSwitcher.whichChoice }
Group7.AddRoute(FieldVal57, Switch8.whichChoice);
Transform299 := TTransformNode.Create;
Transform299.Translation := Vector3(48, 33.39999999999999, 0);
TouchSensor300 := TTouchSensorNode.Create;
TouchSensor300.Description := 'TSJinLidTightener';
TouchSensor300.X3DName := 'JinLidTightener_Sensor';
Transform299.FdChildren.Add(TouchSensor300);
Shape301 := TShapeNode.Create;
Appearance302 := TAppearanceNode.Create;
Material303 := TMaterialNode.Create;
Material303.DiffuseColor := Vector3(1, 1, 1);
Appearance302.Material := Material303;
Shape301.Appearance := Appearance302;
Text304 := TTextNode.Create;
Text304.SetText(['JinLidTightener']);
FontStyle305 := TFontStyleNode.Create;
FontStyle305.Size := 2.4;
FontStyle305.Spacing := 1.2;
FontStyle305.Justify := fjMiddle;
FontStyle305.JustifyMinor := fjMiddle;
Text304.FontStyle := FontStyle305;
Shape301.Geometry := Text304;
Transform299.FdChildren.Add(Shape301);
Shape306 := TShapeNode.Create;
end;

procedure InitMenuJinPart23;
begin
Appearance307 := TAppearanceNode.Create;
Material308 := TMaterialNode.Create;
Material308.DiffuseColor := Vector3(0, 0, 1);
Appearance307.Material := Material308;
Shape306.Appearance := Appearance307;
IndexedFaceSet309 := TIndexedFaceSetNode.Create;
IndexedFaceSet309.SetCoordIndex([0, 1, 2, 3, -1]);
Coordinate310 := TCoordinateNode.Create;
Coordinate310.SetPoint([Vector3(20, 1.3833333333333333, -0.1), Vector3(-20, 1.3833333333333333, -0.1), Vector3(-20, -1.616666666666667, -0.1), Vector3(20, -1.616666666666667, -0.1)]);
IndexedFaceSet309.Coord := Coordinate310;
Shape306.Geometry := IndexedFaceSet309;
Transform299.FdChildren.Add(Shape306);
Group7.FdChildren.Add(Transform299);
{ ROUTE JinLidTightener_Sensor.touchTime TO Choice10.touchTime }
Group7.AddRoute(TouchSensor300.EventTouchTime, FieldVal61);
{ ROUTE Choice10.choice TO SceneSwitcher.whichChoice }
Group7.AddRoute(FieldVal62, Switch8.whichChoice);
Transform313 := TTransformNode.Create;
Transform313.Translation := Vector3(48, 30.399999999999995, 0);
TouchSensor314 := TTouchSensorNode.Create;
TouchSensor314.Description := 'TSJinLipCornerDepressor';
TouchSensor314.X3DName := 'JinLipCornerDepressor_Sensor';
Transform313.FdChildren.Add(TouchSensor314);
Shape315 := TShapeNode.Create;
Appearance316 := TAppearanceNode.Create;
Material317 := TMaterialNode.Create;
Material317.DiffuseColor := Vector3(1, 1, 1);
Appearance316.Material := Material317;
Shape315.Appearance := Appearance316;
Text318 := TTextNode.Create;
Text318.SetText(['JinLipCornerDepressor']);
FontStyle319 := TFontStyleNode.Create;
FontStyle319.Size := 2.4;
FontStyle319.Spacing := 1.2;
FontStyle319.Justify := fjMiddle;
FontStyle319.JustifyMinor := fjMiddle;
Text318.FontStyle := FontStyle319;
Shape315.Geometry := Text318;
Transform313.FdChildren.Add(Shape315);
Shape320 := TShapeNode.Create;
end;

procedure InitMenuJinPart24;
begin
Appearance321 := TAppearanceNode.Create;
Material322 := TMaterialNode.Create;
Material322.DiffuseColor := Vector3(0, 0, 1);
Appearance321.Material := Material322;
Shape320.Appearance := Appearance321;
IndexedFaceSet323 := TIndexedFaceSetNode.Create;
IndexedFaceSet323.SetCoordIndex([0, 1, 2, 3, -1]);
Coordinate324 := TCoordinateNode.Create;
Coordinate324.SetPoint([Vector3(20, 1.3833333333333333, -0.1), Vector3(-20, 1.3833333333333333, -0.1), Vector3(-20, -1.616666666666667, -0.1), Vector3(20, -1.616666666666667, -0.1)]);
IndexedFaceSet323.Coord := Coordinate324;
Shape320.Geometry := IndexedFaceSet323;
Transform313.FdChildren.Add(Shape320);
Group7.FdChildren.Add(Transform313);
{ ROUTE JinLipCornerDepressor_Sensor.touchTime TO Choice11.touchTime }
Group7.AddRoute(TouchSensor314.EventTouchTime, FieldVal66);
{ ROUTE Choice11.choice TO SceneSwitcher.whichChoice }
Group7.AddRoute(FieldVal67, Switch8.whichChoice);
Transform327 := TTransformNode.Create;
Transform327.Translation := Vector3(48, 27.399999999999995, 0);
TouchSensor328 := TTouchSensorNode.Create;
TouchSensor328.Description := 'TSJinLipCornerPuller';
TouchSensor328.X3DName := 'JinLipCornerPuller_Sensor';
Transform327.FdChildren.Add(TouchSensor328);
Shape329 := TShapeNode.Create;
Appearance330 := TAppearanceNode.Create;
Material331 := TMaterialNode.Create;
Material331.DiffuseColor := Vector3(1, 1, 1);
Appearance330.Material := Material331;
Shape329.Appearance := Appearance330;
Text332 := TTextNode.Create;
Text332.SetText(['JinLipCornerPuller']);
FontStyle333 := TFontStyleNode.Create;
FontStyle333.Size := 2.4;
FontStyle333.Spacing := 1.2;
FontStyle333.Justify := fjMiddle;
FontStyle333.JustifyMinor := fjMiddle;
Text332.FontStyle := FontStyle333;
Shape329.Geometry := Text332;
Transform327.FdChildren.Add(Shape329);
Shape334 := TShapeNode.Create;
end;

procedure InitMenuJinPart25;
begin
Appearance335 := TAppearanceNode.Create;
Material336 := TMaterialNode.Create;
Material336.DiffuseColor := Vector3(0, 0, 1);
Appearance335.Material := Material336;
Shape334.Appearance := Appearance335;
IndexedFaceSet337 := TIndexedFaceSetNode.Create;
IndexedFaceSet337.SetCoordIndex([0, 1, 2, 3, -1]);
Coordinate338 := TCoordinateNode.Create;
Coordinate338.SetPoint([Vector3(20, 1.3833333333333333, -0.1), Vector3(-20, 1.3833333333333333, -0.1), Vector3(-20, -1.616666666666667, -0.1), Vector3(20, -1.616666666666667, -0.1)]);
IndexedFaceSet337.Coord := Coordinate338;
Shape334.Geometry := IndexedFaceSet337;
Transform327.FdChildren.Add(Shape334);
Group7.FdChildren.Add(Transform327);
{ ROUTE JinLipCornerPuller_Sensor.touchTime TO Choice12.touchTime }
Group7.AddRoute(TouchSensor328.EventTouchTime, FieldVal71);
{ ROUTE Choice12.choice TO SceneSwitcher.whichChoice }
Group7.AddRoute(FieldVal72, Switch8.whichChoice);
Transform341 := TTransformNode.Create;
Transform341.Translation := Vector3(48, 24.399999999999995, 0);
TouchSensor342 := TTouchSensorNode.Create;
TouchSensor342.Description := 'TSJinLipFunneler';
TouchSensor342.X3DName := 'JinLipFunneler_Sensor';
Transform341.FdChildren.Add(TouchSensor342);
Shape343 := TShapeNode.Create;
Appearance344 := TAppearanceNode.Create;
Material345 := TMaterialNode.Create;
Material345.DiffuseColor := Vector3(1, 1, 1);
Appearance344.Material := Material345;
Shape343.Appearance := Appearance344;
Text346 := TTextNode.Create;
Text346.SetText(['JinLipFunneler']);
FontStyle347 := TFontStyleNode.Create;
FontStyle347.Size := 2.4;
FontStyle347.Spacing := 1.2;
FontStyle347.Justify := fjMiddle;
FontStyle347.JustifyMinor := fjMiddle;
Text346.FontStyle := FontStyle347;
Shape343.Geometry := Text346;
Transform341.FdChildren.Add(Shape343);
Shape348 := TShapeNode.Create;
end;

procedure InitMenuJinPart26;
begin
Appearance349 := TAppearanceNode.Create;
Material350 := TMaterialNode.Create;
Material350.DiffuseColor := Vector3(0, 0, 1);
Appearance349.Material := Material350;
Shape348.Appearance := Appearance349;
IndexedFaceSet351 := TIndexedFaceSetNode.Create;
IndexedFaceSet351.SetCoordIndex([0, 1, 2, 3, -1]);
Coordinate352 := TCoordinateNode.Create;
Coordinate352.SetPoint([Vector3(20, 1.3833333333333333, -0.1), Vector3(-20, 1.3833333333333333, -0.1), Vector3(-20, -1.616666666666667, -0.1), Vector3(20, -1.616666666666667, -0.1)]);
IndexedFaceSet351.Coord := Coordinate352;
Shape348.Geometry := IndexedFaceSet351;
Transform341.FdChildren.Add(Shape348);
Group7.FdChildren.Add(Transform341);
{ ROUTE JinLipFunneler_Sensor.touchTime TO Choice13.touchTime }
Group7.AddRoute(TouchSensor342.EventTouchTime, FieldVal76);
{ ROUTE Choice13.choice TO SceneSwitcher.whichChoice }
Group7.AddRoute(FieldVal77, Switch8.whichChoice);
Transform355 := TTransformNode.Create;
Transform355.Translation := Vector3(48, 21.399999999999995, 0);
TouchSensor356 := TTouchSensorNode.Create;
TouchSensor356.Description := 'TSJinLipPressor';
TouchSensor356.X3DName := 'JinLipPressor_Sensor';
Transform355.FdChildren.Add(TouchSensor356);
Shape357 := TShapeNode.Create;
Appearance358 := TAppearanceNode.Create;
Material359 := TMaterialNode.Create;
Material359.DiffuseColor := Vector3(1, 1, 1);
Appearance358.Material := Material359;
Shape357.Appearance := Appearance358;
Text360 := TTextNode.Create;
Text360.SetText(['JinLipPressor']);
FontStyle361 := TFontStyleNode.Create;
FontStyle361.Size := 2.4;
FontStyle361.Spacing := 1.2;
FontStyle361.Justify := fjMiddle;
FontStyle361.JustifyMinor := fjMiddle;
Text360.FontStyle := FontStyle361;
Shape357.Geometry := Text360;
Transform355.FdChildren.Add(Shape357);
Shape362 := TShapeNode.Create;
end;

procedure InitMenuJinPart27;
begin
Appearance363 := TAppearanceNode.Create;
Material364 := TMaterialNode.Create;
Material364.DiffuseColor := Vector3(0, 0, 1);
Appearance363.Material := Material364;
Shape362.Appearance := Appearance363;
IndexedFaceSet365 := TIndexedFaceSetNode.Create;
IndexedFaceSet365.SetCoordIndex([0, 1, 2, 3, -1]);
Coordinate366 := TCoordinateNode.Create;
Coordinate366.SetPoint([Vector3(20, 1.3833333333333333, -0.1), Vector3(-20, 1.3833333333333333, -0.1), Vector3(-20, -1.616666666666667, -0.1), Vector3(20, -1.616666666666667, -0.1)]);
IndexedFaceSet365.Coord := Coordinate366;
Shape362.Geometry := IndexedFaceSet365;
Transform355.FdChildren.Add(Shape362);
Group7.FdChildren.Add(Transform355);
{ ROUTE JinLipPressor_Sensor.touchTime TO Choice14.touchTime }
Group7.AddRoute(TouchSensor356.EventTouchTime, FieldVal81);
{ ROUTE Choice14.choice TO SceneSwitcher.whichChoice }
Group7.AddRoute(FieldVal82, Switch8.whichChoice);
Transform369 := TTransformNode.Create;
Transform369.Translation := Vector3(48, 18.4, 0);
TouchSensor370 := TTouchSensorNode.Create;
TouchSensor370.Description := 'TSJinLipPuckerer';
TouchSensor370.X3DName := 'JinLipPuckerer_Sensor';
Transform369.FdChildren.Add(TouchSensor370);
Shape371 := TShapeNode.Create;
Appearance372 := TAppearanceNode.Create;
Material373 := TMaterialNode.Create;
Material373.DiffuseColor := Vector3(1, 1, 1);
Appearance372.Material := Material373;
Shape371.Appearance := Appearance372;
Text374 := TTextNode.Create;
Text374.SetText(['JinLipPuckerer']);
FontStyle375 := TFontStyleNode.Create;
FontStyle375.Size := 2.4;
FontStyle375.Spacing := 1.2;
FontStyle375.Justify := fjMiddle;
FontStyle375.JustifyMinor := fjMiddle;
Text374.FontStyle := FontStyle375;
Shape371.Geometry := Text374;
Transform369.FdChildren.Add(Shape371);
Shape376 := TShapeNode.Create;
end;

procedure InitMenuJinPart28;
begin
Appearance377 := TAppearanceNode.Create;
Material378 := TMaterialNode.Create;
Material378.DiffuseColor := Vector3(0, 0, 1);
Appearance377.Material := Material378;
Shape376.Appearance := Appearance377;
IndexedFaceSet379 := TIndexedFaceSetNode.Create;
IndexedFaceSet379.SetCoordIndex([0, 1, 2, 3, -1]);
Coordinate380 := TCoordinateNode.Create;
Coordinate380.SetPoint([Vector3(20, 1.3833333333333333, -0.1), Vector3(-20, 1.3833333333333333, -0.1), Vector3(-20, -1.616666666666667, -0.1), Vector3(20, -1.616666666666667, -0.1)]);
IndexedFaceSet379.Coord := Coordinate380;
Shape376.Geometry := IndexedFaceSet379;
Transform369.FdChildren.Add(Shape376);
Group7.FdChildren.Add(Transform369);
{ ROUTE JinLipPuckerer_Sensor.touchTime TO Choice15.touchTime }
Group7.AddRoute(TouchSensor370.EventTouchTime, FieldVal86);
{ ROUTE Choice15.choice TO SceneSwitcher.whichChoice }
Group7.AddRoute(FieldVal87, Switch8.whichChoice);
Transform383 := TTransformNode.Create;
Transform383.Translation := Vector3(48, 15.399999999999997, 0);
TouchSensor384 := TTouchSensorNode.Create;
TouchSensor384.Description := 'TSJinLipsPart';
TouchSensor384.X3DName := 'JinLipsPart_Sensor';
Transform383.FdChildren.Add(TouchSensor384);
Shape385 := TShapeNode.Create;
Appearance386 := TAppearanceNode.Create;
Material387 := TMaterialNode.Create;
Material387.DiffuseColor := Vector3(1, 1, 1);
Appearance386.Material := Material387;
Shape385.Appearance := Appearance386;
Text388 := TTextNode.Create;
Text388.SetText(['JinLipsPart']);
FontStyle389 := TFontStyleNode.Create;
FontStyle389.Size := 2.4;
FontStyle389.Spacing := 1.2;
FontStyle389.Justify := fjMiddle;
FontStyle389.JustifyMinor := fjMiddle;
Text388.FontStyle := FontStyle389;
Shape385.Geometry := Text388;
Transform383.FdChildren.Add(Shape385);
Shape390 := TShapeNode.Create;
end;

procedure InitMenuJinPart29;
begin
Appearance391 := TAppearanceNode.Create;
Material392 := TMaterialNode.Create;
Material392.DiffuseColor := Vector3(0, 0, 1);
Appearance391.Material := Material392;
Shape390.Appearance := Appearance391;
IndexedFaceSet393 := TIndexedFaceSetNode.Create;
IndexedFaceSet393.SetCoordIndex([0, 1, 2, 3, -1]);
Coordinate394 := TCoordinateNode.Create;
Coordinate394.SetPoint([Vector3(20, 1.3833333333333333, -0.1), Vector3(-20, 1.3833333333333333, -0.1), Vector3(-20, -1.616666666666667, -0.1), Vector3(20, -1.616666666666667, -0.1)]);
IndexedFaceSet393.Coord := Coordinate394;
Shape390.Geometry := IndexedFaceSet393;
Transform383.FdChildren.Add(Shape390);
Group7.FdChildren.Add(Transform383);
{ ROUTE JinLipsPart_Sensor.touchTime TO Choice16.touchTime }
Group7.AddRoute(TouchSensor384.EventTouchTime, FieldVal91);
{ ROUTE Choice16.choice TO SceneSwitcher.whichChoice }
Group7.AddRoute(FieldVal92, Switch8.whichChoice);
Transform397 := TTransformNode.Create;
Transform397.Translation := Vector3(48, 12.399999999999999, 0);
TouchSensor398 := TTouchSensorNode.Create;
TouchSensor398.Description := 'TSJinLipStretcher';
TouchSensor398.X3DName := 'JinLipStretcher_Sensor';
Transform397.FdChildren.Add(TouchSensor398);
Shape399 := TShapeNode.Create;
Appearance400 := TAppearanceNode.Create;
Material401 := TMaterialNode.Create;
Material401.DiffuseColor := Vector3(1, 1, 1);
Appearance400.Material := Material401;
Shape399.Appearance := Appearance400;
Text402 := TTextNode.Create;
Text402.SetText(['JinLipStretcher']);
FontStyle403 := TFontStyleNode.Create;
FontStyle403.Size := 2.4;
FontStyle403.Spacing := 1.2;
FontStyle403.Justify := fjMiddle;
FontStyle403.JustifyMinor := fjMiddle;
Text402.FontStyle := FontStyle403;
Shape399.Geometry := Text402;
Transform397.FdChildren.Add(Shape399);
Shape404 := TShapeNode.Create;
end;

procedure InitMenuJinPart30;
begin
Appearance405 := TAppearanceNode.Create;
Material406 := TMaterialNode.Create;
Material406.DiffuseColor := Vector3(0, 0, 1);
Appearance405.Material := Material406;
Shape404.Appearance := Appearance405;
IndexedFaceSet407 := TIndexedFaceSetNode.Create;
IndexedFaceSet407.SetCoordIndex([0, 1, 2, 3, -1]);
Coordinate408 := TCoordinateNode.Create;
Coordinate408.SetPoint([Vector3(20, 1.3833333333333333, -0.1), Vector3(-20, 1.3833333333333333, -0.1), Vector3(-20, -1.616666666666667, -0.1), Vector3(20, -1.616666666666667, -0.1)]);
IndexedFaceSet407.Coord := Coordinate408;
Shape404.Geometry := IndexedFaceSet407;
Transform397.FdChildren.Add(Shape404);
Group7.FdChildren.Add(Transform397);
{ ROUTE JinLipStretcher_Sensor.touchTime TO Choice17.touchTime }
Group7.AddRoute(TouchSensor398.EventTouchTime, FieldVal96);
{ ROUTE Choice17.choice TO SceneSwitcher.whichChoice }
Group7.AddRoute(FieldVal97, Switch8.whichChoice);
Transform411 := TTransformNode.Create;
Transform411.Translation := Vector3(48, 9.399999999999999, 0);
TouchSensor412 := TTouchSensorNode.Create;
TouchSensor412.Description := 'TSJinLipSuck';
TouchSensor412.X3DName := 'JinLipSuck_Sensor';
Transform411.FdChildren.Add(TouchSensor412);
Shape413 := TShapeNode.Create;
Appearance414 := TAppearanceNode.Create;
Material415 := TMaterialNode.Create;
Material415.DiffuseColor := Vector3(1, 1, 1);
Appearance414.Material := Material415;
Shape413.Appearance := Appearance414;
Text416 := TTextNode.Create;
Text416.SetText(['JinLipSuck']);
FontStyle417 := TFontStyleNode.Create;
FontStyle417.Size := 2.4;
FontStyle417.Spacing := 1.2;
FontStyle417.Justify := fjMiddle;
FontStyle417.JustifyMinor := fjMiddle;
Text416.FontStyle := FontStyle417;
Shape413.Geometry := Text416;
Transform411.FdChildren.Add(Shape413);
Shape418 := TShapeNode.Create;
end;

procedure InitMenuJinPart31;
begin
Appearance419 := TAppearanceNode.Create;
Material420 := TMaterialNode.Create;
Material420.DiffuseColor := Vector3(0, 0, 1);
Appearance419.Material := Material420;
Shape418.Appearance := Appearance419;
IndexedFaceSet421 := TIndexedFaceSetNode.Create;
IndexedFaceSet421.SetCoordIndex([0, 1, 2, 3, -1]);
Coordinate422 := TCoordinateNode.Create;
Coordinate422.SetPoint([Vector3(20, 1.3833333333333333, -0.1), Vector3(-20, 1.3833333333333333, -0.1), Vector3(-20, -1.616666666666667, -0.1), Vector3(20, -1.616666666666667, -0.1)]);
IndexedFaceSet421.Coord := Coordinate422;
Shape418.Geometry := IndexedFaceSet421;
Transform411.FdChildren.Add(Shape418);
Group7.FdChildren.Add(Transform411);
{ ROUTE JinLipSuck_Sensor.touchTime TO Choice18.touchTime }
Group7.AddRoute(TouchSensor412.EventTouchTime, FieldVal101);
{ ROUTE Choice18.choice TO SceneSwitcher.whichChoice }
Group7.AddRoute(FieldVal102, Switch8.whichChoice);
Transform425 := TTransformNode.Create;
Transform425.Translation := Vector3(48, 6.399999999999999, 0);
TouchSensor426 := TTouchSensorNode.Create;
TouchSensor426.Description := 'TSJinLipTightener';
TouchSensor426.X3DName := 'JinLipTightener_Sensor';
Transform425.FdChildren.Add(TouchSensor426);
Shape427 := TShapeNode.Create;
Appearance428 := TAppearanceNode.Create;
Material429 := TMaterialNode.Create;
Material429.DiffuseColor := Vector3(1, 1, 1);
Appearance428.Material := Material429;
Shape427.Appearance := Appearance428;
Text430 := TTextNode.Create;
Text430.SetText(['JinLipTightener']);
FontStyle431 := TFontStyleNode.Create;
FontStyle431.Size := 2.4;
FontStyle431.Spacing := 1.2;
FontStyle431.Justify := fjMiddle;
FontStyle431.JustifyMinor := fjMiddle;
Text430.FontStyle := FontStyle431;
Shape427.Geometry := Text430;
Transform425.FdChildren.Add(Shape427);
Shape432 := TShapeNode.Create;
end;

procedure InitMenuJinPart32;
begin
Appearance433 := TAppearanceNode.Create;
Material434 := TMaterialNode.Create;
Material434.DiffuseColor := Vector3(0, 0, 1);
Appearance433.Material := Material434;
Shape432.Appearance := Appearance433;
IndexedFaceSet435 := TIndexedFaceSetNode.Create;
IndexedFaceSet435.SetCoordIndex([0, 1, 2, 3, -1]);
Coordinate436 := TCoordinateNode.Create;
Coordinate436.SetPoint([Vector3(20, 1.3833333333333333, -0.1), Vector3(-20, 1.3833333333333333, -0.1), Vector3(-20, -1.616666666666667, -0.1), Vector3(20, -1.616666666666667, -0.1)]);
IndexedFaceSet435.Coord := Coordinate436;
Shape432.Geometry := IndexedFaceSet435;
Transform425.FdChildren.Add(Shape432);
Group7.FdChildren.Add(Transform425);
{ ROUTE JinLipTightener_Sensor.touchTime TO Choice19.touchTime }
Group7.AddRoute(TouchSensor426.EventTouchTime, FieldVal106);
{ ROUTE Choice19.choice TO SceneSwitcher.whichChoice }
Group7.AddRoute(FieldVal107, Switch8.whichChoice);
Transform439 := TTransformNode.Create;
Transform439.Translation := Vector3(48, 3.399999999999995, 0);
TouchSensor440 := TTouchSensorNode.Create;
TouchSensor440.Description := 'TSJinLowerLipDepressor';
TouchSensor440.X3DName := 'JinLowerLipDepressor_Sensor';
Transform439.FdChildren.Add(TouchSensor440);
Shape441 := TShapeNode.Create;
Appearance442 := TAppearanceNode.Create;
Material443 := TMaterialNode.Create;
Material443.DiffuseColor := Vector3(1, 1, 1);
Appearance442.Material := Material443;
Shape441.Appearance := Appearance442;
Text444 := TTextNode.Create;
Text444.SetText(['JinLowerLipDepressor']);
FontStyle445 := TFontStyleNode.Create;
FontStyle445.Size := 2.4;
FontStyle445.Spacing := 1.2;
FontStyle445.Justify := fjMiddle;
FontStyle445.JustifyMinor := fjMiddle;
Text444.FontStyle := FontStyle445;
Shape441.Geometry := Text444;
Transform439.FdChildren.Add(Shape441);
Shape446 := TShapeNode.Create;
end;

procedure InitMenuJinPart33;
begin
Appearance447 := TAppearanceNode.Create;
Material448 := TMaterialNode.Create;
Material448.DiffuseColor := Vector3(0, 0, 1);
Appearance447.Material := Material448;
Shape446.Appearance := Appearance447;
IndexedFaceSet449 := TIndexedFaceSetNode.Create;
IndexedFaceSet449.SetCoordIndex([0, 1, 2, 3, -1]);
Coordinate450 := TCoordinateNode.Create;
Coordinate450.SetPoint([Vector3(20, 1.3833333333333333, -0.1), Vector3(-20, 1.3833333333333333, -0.1), Vector3(-20, -1.616666666666667, -0.1), Vector3(20, -1.616666666666667, -0.1)]);
IndexedFaceSet449.Coord := Coordinate450;
Shape446.Geometry := IndexedFaceSet449;
Transform439.FdChildren.Add(Shape446);
Group7.FdChildren.Add(Transform439);
{ ROUTE JinLowerLipDepressor_Sensor.touchTime TO Choice20.touchTime }
Group7.AddRoute(TouchSensor440.EventTouchTime, FieldVal111);
{ ROUTE Choice20.choice TO SceneSwitcher.whichChoice }
Group7.AddRoute(FieldVal112, Switch8.whichChoice);
Transform453 := TTransformNode.Create;
Transform453.Translation := Vector3(48, 0.399999999999995, 0);
TouchSensor454 := TTouchSensorNode.Create;
TouchSensor454.Description := 'TSJinMouthStretch';
TouchSensor454.X3DName := 'JinMouthStretch_Sensor';
Transform453.FdChildren.Add(TouchSensor454);
Shape455 := TShapeNode.Create;
Appearance456 := TAppearanceNode.Create;
Material457 := TMaterialNode.Create;
Material457.DiffuseColor := Vector3(1, 1, 1);
Appearance456.Material := Material457;
Shape455.Appearance := Appearance456;
Text458 := TTextNode.Create;
Text458.SetText(['JinMouthStretch']);
FontStyle459 := TFontStyleNode.Create;
FontStyle459.Size := 2.4;
FontStyle459.Spacing := 1.2;
FontStyle459.Justify := fjMiddle;
FontStyle459.JustifyMinor := fjMiddle;
Text458.FontStyle := FontStyle459;
Shape455.Geometry := Text458;
Transform453.FdChildren.Add(Shape455);
Shape460 := TShapeNode.Create;
end;

procedure InitMenuJinPart34;
begin
Appearance461 := TAppearanceNode.Create;
Material462 := TMaterialNode.Create;
Material462.DiffuseColor := Vector3(0, 0, 1);
Appearance461.Material := Material462;
Shape460.Appearance := Appearance461;
IndexedFaceSet463 := TIndexedFaceSetNode.Create;
IndexedFaceSet463.SetCoordIndex([0, 1, 2, 3, -1]);
Coordinate464 := TCoordinateNode.Create;
Coordinate464.SetPoint([Vector3(20, 1.3833333333333333, -0.1), Vector3(-20, 1.3833333333333333, -0.1), Vector3(-20, -1.616666666666667, -0.1), Vector3(20, -1.616666666666667, -0.1)]);
IndexedFaceSet463.Coord := Coordinate464;
Shape460.Geometry := IndexedFaceSet463;
Transform453.FdChildren.Add(Shape460);
Group7.FdChildren.Add(Transform453);
{ ROUTE JinMouthStretch_Sensor.touchTime TO Choice21.touchTime }
Group7.AddRoute(TouchSensor454.EventTouchTime, FieldVal116);
{ ROUTE Choice21.choice TO SceneSwitcher.whichChoice }
Group7.AddRoute(FieldVal117, Switch8.whichChoice);
Transform467 := TTransformNode.Create;
Transform467.Translation := Vector3(48, -2.6000000000000085, 0);
TouchSensor468 := TTouchSensorNode.Create;
TouchSensor468.Description := 'TSJinNasolabialDeepener';
TouchSensor468.X3DName := 'JinNasolabialDeepener_Sensor';
Transform467.FdChildren.Add(TouchSensor468);
Shape469 := TShapeNode.Create;
Appearance470 := TAppearanceNode.Create;
Material471 := TMaterialNode.Create;
Material471.DiffuseColor := Vector3(1, 1, 1);
Appearance470.Material := Material471;
Shape469.Appearance := Appearance470;
Text472 := TTextNode.Create;
Text472.SetText(['JinNasolabialDeepener']);
FontStyle473 := TFontStyleNode.Create;
FontStyle473.Size := 2.4;
FontStyle473.Spacing := 1.2;
FontStyle473.Justify := fjMiddle;
FontStyle473.JustifyMinor := fjMiddle;
Text472.FontStyle := FontStyle473;
Shape469.Geometry := Text472;
Transform467.FdChildren.Add(Shape469);
Shape474 := TShapeNode.Create;
end;

procedure InitMenuJinPart35;
begin
Appearance475 := TAppearanceNode.Create;
Material476 := TMaterialNode.Create;
Material476.DiffuseColor := Vector3(0, 0, 1);
Appearance475.Material := Material476;
Shape474.Appearance := Appearance475;
IndexedFaceSet477 := TIndexedFaceSetNode.Create;
IndexedFaceSet477.SetCoordIndex([0, 1, 2, 3, -1]);
Coordinate478 := TCoordinateNode.Create;
Coordinate478.SetPoint([Vector3(20, 1.3833333333333333, -0.1), Vector3(-20, 1.3833333333333333, -0.1), Vector3(-20, -1.616666666666667, -0.1), Vector3(20, -1.616666666666667, -0.1)]);
IndexedFaceSet477.Coord := Coordinate478;
Shape474.Geometry := IndexedFaceSet477;
Transform467.FdChildren.Add(Shape474);
Group7.FdChildren.Add(Transform467);
{ ROUTE JinNasolabialDeepener_Sensor.touchTime TO Choice22.touchTime }
Group7.AddRoute(TouchSensor468.EventTouchTime, FieldVal121);
{ ROUTE Choice22.choice TO SceneSwitcher.whichChoice }
Group7.AddRoute(FieldVal122, Switch8.whichChoice);
Transform481 := TTransformNode.Create;
Transform481.Translation := Vector3(48, -5.6000000000000085, 0);
TouchSensor482 := TTouchSensorNode.Create;
TouchSensor482.Description := 'TSJinNoseWrinkler';
TouchSensor482.X3DName := 'JinNoseWrinkler_Sensor';
Transform481.FdChildren.Add(TouchSensor482);
Shape483 := TShapeNode.Create;
Appearance484 := TAppearanceNode.Create;
Material485 := TMaterialNode.Create;
Material485.DiffuseColor := Vector3(1, 1, 1);
Appearance484.Material := Material485;
Shape483.Appearance := Appearance484;
Text486 := TTextNode.Create;
Text486.SetText(['JinNoseWrinkler']);
FontStyle487 := TFontStyleNode.Create;
FontStyle487.Size := 2.4;
FontStyle487.Spacing := 1.2;
FontStyle487.Justify := fjMiddle;
FontStyle487.JustifyMinor := fjMiddle;
Text486.FontStyle := FontStyle487;
Shape483.Geometry := Text486;
Transform481.FdChildren.Add(Shape483);
Shape488 := TShapeNode.Create;
end;

procedure InitMenuJinPart36;
begin
Appearance489 := TAppearanceNode.Create;
Material490 := TMaterialNode.Create;
Material490.DiffuseColor := Vector3(0, 0, 1);
Appearance489.Material := Material490;
Shape488.Appearance := Appearance489;
IndexedFaceSet491 := TIndexedFaceSetNode.Create;
IndexedFaceSet491.SetCoordIndex([0, 1, 2, 3, -1]);
Coordinate492 := TCoordinateNode.Create;
Coordinate492.SetPoint([Vector3(20, 1.3833333333333333, -0.1), Vector3(-20, 1.3833333333333333, -0.1), Vector3(-20, -1.616666666666667, -0.1), Vector3(20, -1.616666666666667, -0.1)]);
IndexedFaceSet491.Coord := Coordinate492;
Shape488.Geometry := IndexedFaceSet491;
Transform481.FdChildren.Add(Shape488);
Group7.FdChildren.Add(Transform481);
{ ROUTE JinNoseWrinkler_Sensor.touchTime TO Choice23.touchTime }
Group7.AddRoute(TouchSensor482.EventTouchTime, FieldVal126);
{ ROUTE Choice23.choice TO SceneSwitcher.whichChoice }
Group7.AddRoute(FieldVal127, Switch8.whichChoice);
Transform495 := TTransformNode.Create;
Transform495.Translation := Vector3(48, -8.600000000000009, 0);
TouchSensor496 := TTouchSensorNode.Create;
TouchSensor496.Description := 'TSJinOuterBrowRaiser';
TouchSensor496.X3DName := 'JinOuterBrowRaiser_Sensor';
Transform495.FdChildren.Add(TouchSensor496);
Shape497 := TShapeNode.Create;
Appearance498 := TAppearanceNode.Create;
Material499 := TMaterialNode.Create;
Material499.DiffuseColor := Vector3(1, 1, 1);
Appearance498.Material := Material499;
Shape497.Appearance := Appearance498;
Text500 := TTextNode.Create;
Text500.SetText(['JinOuterBrowRaiser']);
FontStyle501 := TFontStyleNode.Create;
FontStyle501.Size := 2.4;
FontStyle501.Spacing := 1.2;
FontStyle501.Justify := fjMiddle;
FontStyle501.JustifyMinor := fjMiddle;
Text500.FontStyle := FontStyle501;
Shape497.Geometry := Text500;
Transform495.FdChildren.Add(Shape497);
Shape502 := TShapeNode.Create;
end;

procedure InitMenuJinPart37;
begin
Appearance503 := TAppearanceNode.Create;
Material504 := TMaterialNode.Create;
Material504.DiffuseColor := Vector3(0, 0, 1);
Appearance503.Material := Material504;
Shape502.Appearance := Appearance503;
IndexedFaceSet505 := TIndexedFaceSetNode.Create;
IndexedFaceSet505.SetCoordIndex([0, 1, 2, 3, -1]);
Coordinate506 := TCoordinateNode.Create;
Coordinate506.SetPoint([Vector3(20, 1.3833333333333333, -0.1), Vector3(-20, 1.3833333333333333, -0.1), Vector3(-20, -1.616666666666667, -0.1), Vector3(20, -1.616666666666667, -0.1)]);
IndexedFaceSet505.Coord := Coordinate506;
Shape502.Geometry := IndexedFaceSet505;
Transform495.FdChildren.Add(Shape502);
Group7.FdChildren.Add(Transform495);
{ ROUTE JinOuterBrowRaiser_Sensor.touchTime TO Choice24.touchTime }
Group7.AddRoute(TouchSensor496.EventTouchTime, FieldVal131);
{ ROUTE Choice24.choice TO SceneSwitcher.whichChoice }
Group7.AddRoute(FieldVal132, Switch8.whichChoice);
Transform509 := TTransformNode.Create;
Transform509.Translation := Vector3(48, -11.600000000000009, 0);
TouchSensor510 := TTouchSensorNode.Create;
TouchSensor510.Description := 'TSJinSlit';
TouchSensor510.X3DName := 'JinSlit_Sensor';
Transform509.FdChildren.Add(TouchSensor510);
Shape511 := TShapeNode.Create;
Appearance512 := TAppearanceNode.Create;
Material513 := TMaterialNode.Create;
Material513.DiffuseColor := Vector3(1, 1, 1);
Appearance512.Material := Material513;
Shape511.Appearance := Appearance512;
Text514 := TTextNode.Create;
Text514.SetText(['JinSlit']);
FontStyle515 := TFontStyleNode.Create;
FontStyle515.Size := 2.4;
FontStyle515.Spacing := 1.2;
FontStyle515.Justify := fjMiddle;
FontStyle515.JustifyMinor := fjMiddle;
Text514.FontStyle := FontStyle515;
Shape511.Geometry := Text514;
Transform509.FdChildren.Add(Shape511);
Shape516 := TShapeNode.Create;
end;

procedure InitMenuJinPart38;
begin
Appearance517 := TAppearanceNode.Create;
Material518 := TMaterialNode.Create;
Material518.DiffuseColor := Vector3(0, 0, 1);
Appearance517.Material := Material518;
Shape516.Appearance := Appearance517;
IndexedFaceSet519 := TIndexedFaceSetNode.Create;
IndexedFaceSet519.SetCoordIndex([0, 1, 2, 3, -1]);
Coordinate520 := TCoordinateNode.Create;
Coordinate520.SetPoint([Vector3(20, 1.3833333333333333, -0.1), Vector3(-20, 1.3833333333333333, -0.1), Vector3(-20, -1.616666666666667, -0.1), Vector3(20, -1.616666666666667, -0.1)]);
IndexedFaceSet519.Coord := Coordinate520;
Shape516.Geometry := IndexedFaceSet519;
Transform509.FdChildren.Add(Shape516);
Group7.FdChildren.Add(Transform509);
{ ROUTE JinSlit_Sensor.touchTime TO Choice25.touchTime }
Group7.AddRoute(TouchSensor510.EventTouchTime, FieldVal136);
{ ROUTE Choice25.choice TO SceneSwitcher.whichChoice }
Group7.AddRoute(FieldVal137, Switch8.whichChoice);
Transform523 := TTransformNode.Create;
Transform523.Translation := Vector3(48, -14.600000000000001, 0);
TouchSensor524 := TTouchSensorNode.Create;
TouchSensor524.Description := 'TSJinSquint';
TouchSensor524.X3DName := 'JinSquint_Sensor';
Transform523.FdChildren.Add(TouchSensor524);
Shape525 := TShapeNode.Create;
Appearance526 := TAppearanceNode.Create;
Material527 := TMaterialNode.Create;
Material527.DiffuseColor := Vector3(1, 1, 1);
Appearance526.Material := Material527;
Shape525.Appearance := Appearance526;
Text528 := TTextNode.Create;
Text528.SetText(['JinSquint']);
FontStyle529 := TFontStyleNode.Create;
FontStyle529.Size := 2.4;
FontStyle529.Spacing := 1.2;
FontStyle529.Justify := fjMiddle;
FontStyle529.JustifyMinor := fjMiddle;
Text528.FontStyle := FontStyle529;
Shape525.Geometry := Text528;
Transform523.FdChildren.Add(Shape525);
Shape530 := TShapeNode.Create;
end;

procedure InitMenuJinPart39;
begin
Appearance531 := TAppearanceNode.Create;
Material532 := TMaterialNode.Create;
Material532.DiffuseColor := Vector3(0, 0, 1);
Appearance531.Material := Material532;
Shape530.Appearance := Appearance531;
IndexedFaceSet533 := TIndexedFaceSetNode.Create;
IndexedFaceSet533.SetCoordIndex([0, 1, 2, 3, -1]);
Coordinate534 := TCoordinateNode.Create;
Coordinate534.SetPoint([Vector3(20, 1.3833333333333333, -0.1), Vector3(-20, 1.3833333333333333, -0.1), Vector3(-20, -1.616666666666667, -0.1), Vector3(20, -1.616666666666667, -0.1)]);
IndexedFaceSet533.Coord := Coordinate534;
Shape530.Geometry := IndexedFaceSet533;
Transform523.FdChildren.Add(Shape530);
Group7.FdChildren.Add(Transform523);
{ ROUTE JinSquint_Sensor.touchTime TO Choice26.touchTime }
Group7.AddRoute(TouchSensor524.EventTouchTime, FieldVal141);
{ ROUTE Choice26.choice TO SceneSwitcher.whichChoice }
Group7.AddRoute(FieldVal142, Switch8.whichChoice);
Transform537 := TTransformNode.Create;
Transform537.Translation := Vector3(48, -17.6, 0);
TouchSensor538 := TTouchSensorNode.Create;
TouchSensor538.Description := 'TSJinUpperLidRaiser';
TouchSensor538.X3DName := 'JinUpperLidRaiser_Sensor';
Transform537.FdChildren.Add(TouchSensor538);
Shape539 := TShapeNode.Create;
Appearance540 := TAppearanceNode.Create;
Material541 := TMaterialNode.Create;
Material541.DiffuseColor := Vector3(1, 1, 1);
Appearance540.Material := Material541;
Shape539.Appearance := Appearance540;
Text542 := TTextNode.Create;
Text542.SetText(['JinUpperLidRaiser']);
FontStyle543 := TFontStyleNode.Create;
FontStyle543.Size := 2.4;
FontStyle543.Spacing := 1.2;
FontStyle543.Justify := fjMiddle;
FontStyle543.JustifyMinor := fjMiddle;
Text542.FontStyle := FontStyle543;
Shape539.Geometry := Text542;
Transform537.FdChildren.Add(Shape539);
Shape544 := TShapeNode.Create;
end;

procedure InitMenuJinPart40;
begin
Appearance545 := TAppearanceNode.Create;
Material546 := TMaterialNode.Create;
Material546.DiffuseColor := Vector3(0, 0, 1);
Appearance545.Material := Material546;
Shape544.Appearance := Appearance545;
IndexedFaceSet547 := TIndexedFaceSetNode.Create;
IndexedFaceSet547.SetCoordIndex([0, 1, 2, 3, -1]);
Coordinate548 := TCoordinateNode.Create;
Coordinate548.SetPoint([Vector3(20, 1.3833333333333333, -0.1), Vector3(-20, 1.3833333333333333, -0.1), Vector3(-20, -1.616666666666667, -0.1), Vector3(20, -1.616666666666667, -0.1)]);
IndexedFaceSet547.Coord := Coordinate548;
Shape544.Geometry := IndexedFaceSet547;
Transform537.FdChildren.Add(Shape544);
Group7.FdChildren.Add(Transform537);
{ ROUTE JinUpperLidRaiser_Sensor.touchTime TO Choice27.touchTime }
Group7.AddRoute(TouchSensor538.EventTouchTime, FieldVal146);
{ ROUTE Choice27.choice TO SceneSwitcher.whichChoice }
Group7.AddRoute(FieldVal147, Switch8.whichChoice);
Transform551 := TTransformNode.Create;
Transform551.Translation := Vector3(48, -20.6, 0);
TouchSensor552 := TTouchSensorNode.Create;
TouchSensor552.Description := 'TSJinUpperLipRaiser';
TouchSensor552.X3DName := 'JinUpperLipRaiser_Sensor';
Transform551.FdChildren.Add(TouchSensor552);
Shape553 := TShapeNode.Create;
Appearance554 := TAppearanceNode.Create;
Material555 := TMaterialNode.Create;
Material555.DiffuseColor := Vector3(1, 1, 1);
Appearance554.Material := Material555;
Shape553.Appearance := Appearance554;
Text556 := TTextNode.Create;
Text556.SetText(['JinUpperLipRaiser']);
FontStyle557 := TFontStyleNode.Create;
FontStyle557.Size := 2.4;
FontStyle557.Spacing := 1.2;
FontStyle557.Justify := fjMiddle;
FontStyle557.JustifyMinor := fjMiddle;
Text556.FontStyle := FontStyle557;
Shape553.Geometry := Text556;
Transform551.FdChildren.Add(Shape553);
Shape558 := TShapeNode.Create;
end;

procedure InitMenuJinPart41;
begin
Appearance559 := TAppearanceNode.Create;
Material560 := TMaterialNode.Create;
Material560.DiffuseColor := Vector3(0, 0, 1);
Appearance559.Material := Material560;
Shape558.Appearance := Appearance559;
IndexedFaceSet561 := TIndexedFaceSetNode.Create;
IndexedFaceSet561.SetCoordIndex([0, 1, 2, 3, -1]);
Coordinate562 := TCoordinateNode.Create;
Coordinate562.SetPoint([Vector3(20, 1.3833333333333333, -0.1), Vector3(-20, 1.3833333333333333, -0.1), Vector3(-20, -1.616666666666667, -0.1), Vector3(20, -1.616666666666667, -0.1)]);
IndexedFaceSet561.Coord := Coordinate562;
Shape558.Geometry := IndexedFaceSet561;
Transform551.FdChildren.Add(Shape558);
Group7.FdChildren.Add(Transform551);
{ ROUTE JinUpperLipRaiser_Sensor.touchTime TO Choice28.touchTime }
Group7.AddRoute(TouchSensor552.EventTouchTime, FieldVal151);
{ ROUTE Choice28.choice TO SceneSwitcher.whichChoice }
Group7.AddRoute(FieldVal152, Switch8.whichChoice);
Transform565 := TTransformNode.Create;
Transform565.Translation := Vector3(48, -23.599999999999994, 0);
TouchSensor566 := TTouchSensorNode.Create;
TouchSensor566.Description := 'TSJinWink';
TouchSensor566.X3DName := 'JinWink_Sensor';
Transform565.FdChildren.Add(TouchSensor566);
Shape567 := TShapeNode.Create;
Appearance568 := TAppearanceNode.Create;
Material569 := TMaterialNode.Create;
Material569.DiffuseColor := Vector3(1, 1, 1);
Appearance568.Material := Material569;
Shape567.Appearance := Appearance568;
Text570 := TTextNode.Create;
Text570.SetText(['JinWink']);
FontStyle571 := TFontStyleNode.Create;
FontStyle571.Size := 2.4;
FontStyle571.Spacing := 1.2;
FontStyle571.Justify := fjMiddle;
FontStyle571.JustifyMinor := fjMiddle;
Text570.FontStyle := FontStyle571;
Shape567.Geometry := Text570;
Transform565.FdChildren.Add(Shape567);
Shape572 := TShapeNode.Create;
end;

procedure InitMenuJinPart42;
begin
Appearance573 := TAppearanceNode.Create;
Material574 := TMaterialNode.Create;
Material574.DiffuseColor := Vector3(0, 0, 1);
Appearance573.Material := Material574;
Shape572.Appearance := Appearance573;
IndexedFaceSet575 := TIndexedFaceSetNode.Create;
IndexedFaceSet575.SetCoordIndex([0, 1, 2, 3, -1]);
Coordinate576 := TCoordinateNode.Create;
Coordinate576.SetPoint([Vector3(20, 1.3833333333333333, -0.1), Vector3(-20, 1.3833333333333333, -0.1), Vector3(-20, -1.616666666666667, -0.1), Vector3(20, -1.616666666666667, -0.1)]);
IndexedFaceSet575.Coord := Coordinate576;
Shape572.Geometry := IndexedFaceSet575;
Transform565.FdChildren.Add(Shape572);
Group7.FdChildren.Add(Transform565);
{ ROUTE JinWink_Sensor.touchTime TO Choice29.touchTime }
Group7.AddRoute(TouchSensor566.EventTouchTime, FieldVal156);
{ ROUTE Choice29.choice TO SceneSwitcher.whichChoice }
Group7.AddRoute(FieldVal157, Switch8.whichChoice);
Group5.FdChildren.Add(Group7);
X3D0.AddChildren([Group5]);
end;

function CreateMenuJin: TX3DRootNode;
begin
  InitMenuJinPart0;
  InitMenuJinPart1;
  InitMenuJinPart2;
  InitMenuJinPart3;
  InitMenuJinPart4;
  InitMenuJinPart5;
  InitMenuJinPart6;
  InitMenuJinPart7;
  InitMenuJinPart8;
  InitMenuJinPart9;
  InitMenuJinPart10;
  InitMenuJinPart11;
  InitMenuJinPart12;
  InitMenuJinPart13;
  InitMenuJinPart14;
  InitMenuJinPart15;
  InitMenuJinPart16;
  InitMenuJinPart17;
  InitMenuJinPart18;
  InitMenuJinPart19;
  InitMenuJinPart20;
  InitMenuJinPart21;
  InitMenuJinPart22;
  InitMenuJinPart23;
  InitMenuJinPart24;
  InitMenuJinPart25;
  InitMenuJinPart26;
  InitMenuJinPart27;
  InitMenuJinPart28;
  InitMenuJinPart29;
  InitMenuJinPart30;
  InitMenuJinPart31;
  InitMenuJinPart32;
  InitMenuJinPart33;
  InitMenuJinPart34;
  InitMenuJinPart35;
  InitMenuJinPart36;
  InitMenuJinPart37;
  InitMenuJinPart38;
  InitMenuJinPart39;
  InitMenuJinPart40;
  InitMenuJinPart41;
  InitMenuJinPart42;
  Result := X3D0;
end;

procedure RegisterMenuJinScripts(const Scene: TCastleSceneCore);
begin
  if CompiledScript10 <> nil then
    CompiledScript10.RegisterHandlers(Scene);
  if CompiledScript15 <> nil then
    CompiledScript15.RegisterHandlers(Scene);
  if CompiledScript20 <> nil then
    CompiledScript20.RegisterHandlers(Scene);
  if CompiledScript25 <> nil then
    CompiledScript25.RegisterHandlers(Scene);
  if CompiledScript30 <> nil then
    CompiledScript30.RegisterHandlers(Scene);
  if CompiledScript35 <> nil then
    CompiledScript35.RegisterHandlers(Scene);
  if CompiledScript40 <> nil then
    CompiledScript40.RegisterHandlers(Scene);
  if CompiledScript45 <> nil then
    CompiledScript45.RegisterHandlers(Scene);
  if CompiledScript50 <> nil then
    CompiledScript50.RegisterHandlers(Scene);
  if CompiledScript55 <> nil then
    CompiledScript55.RegisterHandlers(Scene);
  if CompiledScript60 <> nil then
    CompiledScript60.RegisterHandlers(Scene);
  if CompiledScript65 <> nil then
    CompiledScript65.RegisterHandlers(Scene);
  if CompiledScript70 <> nil then
    CompiledScript70.RegisterHandlers(Scene);
  if CompiledScript75 <> nil then
    CompiledScript75.RegisterHandlers(Scene);
  if CompiledScript80 <> nil then
    CompiledScript80.RegisterHandlers(Scene);
  if CompiledScript85 <> nil then
    CompiledScript85.RegisterHandlers(Scene);
  if CompiledScript90 <> nil then
    CompiledScript90.RegisterHandlers(Scene);
  if CompiledScript95 <> nil then
    CompiledScript95.RegisterHandlers(Scene);
  if CompiledScript100 <> nil then
    CompiledScript100.RegisterHandlers(Scene);
  if CompiledScript105 <> nil then
    CompiledScript105.RegisterHandlers(Scene);
  if CompiledScript110 <> nil then
    CompiledScript110.RegisterHandlers(Scene);
  if CompiledScript115 <> nil then
    CompiledScript115.RegisterHandlers(Scene);
  if CompiledScript120 <> nil then
    CompiledScript120.RegisterHandlers(Scene);
  if CompiledScript125 <> nil then
    CompiledScript125.RegisterHandlers(Scene);
  if CompiledScript130 <> nil then
    CompiledScript130.RegisterHandlers(Scene);
  if CompiledScript135 <> nil then
    CompiledScript135.RegisterHandlers(Scene);
  if CompiledScript140 <> nil then
    CompiledScript140.RegisterHandlers(Scene);
  if CompiledScript145 <> nil then
    CompiledScript145.RegisterHandlers(Scene);
  if CompiledScript150 <> nil then
    CompiledScript150.RegisterHandlers(Scene);
  if CompiledScript155 <> nil then
    CompiledScript155.RegisterHandlers(Scene);
end;

finalization
  FreeAndNil(CompiledScript10);
  FreeAndNil(CompiledScript15);
  FreeAndNil(CompiledScript20);
  FreeAndNil(CompiledScript25);
  FreeAndNil(CompiledScript30);
  FreeAndNil(CompiledScript35);
  FreeAndNil(CompiledScript40);
  FreeAndNil(CompiledScript45);
  FreeAndNil(CompiledScript50);
  FreeAndNil(CompiledScript55);
  FreeAndNil(CompiledScript60);
  FreeAndNil(CompiledScript65);
  FreeAndNil(CompiledScript70);
  FreeAndNil(CompiledScript75);
  FreeAndNil(CompiledScript80);
  FreeAndNil(CompiledScript85);
  FreeAndNil(CompiledScript90);
  FreeAndNil(CompiledScript95);
  FreeAndNil(CompiledScript100);
  FreeAndNil(CompiledScript105);
  FreeAndNil(CompiledScript110);
  FreeAndNil(CompiledScript115);
  FreeAndNil(CompiledScript120);
  FreeAndNil(CompiledScript125);
  FreeAndNil(CompiledScript130);
  FreeAndNil(CompiledScript135);
  FreeAndNil(CompiledScript140);
  FreeAndNil(CompiledScript145);
  FreeAndNil(CompiledScript150);
  FreeAndNil(CompiledScript155);
end.
