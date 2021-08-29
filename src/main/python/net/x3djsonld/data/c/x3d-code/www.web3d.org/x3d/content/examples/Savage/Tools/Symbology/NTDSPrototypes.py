###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(level=2,name='Geometry2D'),
    meta(content='NTDSPrototypes.x3d',name='title'),
    meta(content='Standard Naval Tactical Display Symbology (NTDS) icons',name='description'),
    meta(content='LT Patrick Sullivan',name='creator'),
    meta(content='11 February 2006',name='created'),
    meta(content='10 October 2015',name='modified'),
    meta(content='NTDSExternProtoExamples.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/Symbology/NTDSPrototypes.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  These first two Protos are common to all symbology 
    children=[
    ProtoDeclare(appinfo='NTDS Symbology for vector',name='SymbolVector',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='Color for labels',name='labelColor',type='SFColor',value=(0.8,0.8,0.8)),
        field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='MFColor',value=[(0.8,0.8,0.8)])]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(
                IS=IS(
                  connect=[
                  connect(nodeField='diffuseColor',protoField='labelColor'),
                  connect(nodeField='emissiveColor',protoField='labelColor')]))),
            #  Cylinder bottom='false' height='.01' radius='.1' side='false'/ 
            geometry=IndexedTriangleSet(index=[2,1,0],ccw=True,colorPerVertex=True,normalPerVertex=True,solid=True,
              coord=Coordinate(point=[(2,0,-0.05),(2.3,0,0),(2,0,0.05)]))),
          Shape(
            geometry=IndexedLineSet(colorIndex=[0,0],colorPerVertex=False,coordIndex=[0,1],
              coord=Coordinate(point=[(0,0,0),(2,0,0)]),
              color=Color(
                IS=IS(
                  connect=[
                  connect(nodeField='color',protoField='color')]))))])])),
    ProtoDeclare(appinfo='NTDS Symbology for label',name='SymbolLabel',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='Color for labels',name='labelColor',type='SFColor',value=(0.8,0.8,0.8)),
        field(accessType='inputOutput',appinfo='Additional information for the track (i.e. track number entityID entity name)',name='trackLabel',type='MFString')]),
      ProtoBody=ProtoBody(
        children=[
        Transform(rotation=(1,0,0,-1.57),translation=(0,0,1.5),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(
                IS=IS(
                  connect=[
                  connect(nodeField='diffuseColor',protoField='labelColor')]))),
            geometry=Text(
              IS=IS(
                connect=[
                connect(nodeField='string',protoField='trackLabel')]),
              fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.8)))])])),
    #  Sea Units 
    ProtoDeclare(appinfo='NTDS Symbology for surface vessel, classification pending',name='SurfacePending',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='SFColor',value=(0.8,0.8,0.8)),
        field(accessType='inputOutput',appinfo='Color for labels',name='labelColor',type='SFColor',value=(0.8,0.8,0.8)),
        field(accessType='inputOutput',appinfo='Symbol Modifier',name='symbolModifier',type='MFString')]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          ProtoInstance(name='SymbolVector',
            fieldValue=[
            fieldValue(name='color',value=[(1,1,0)]),
            fieldValue(name='labelColor',value=(1,1,0))]),
          Billboard(
            #  Symbol Geometry Top arc 
            children=[
            Transform(rotation=(-1,0,0,1.57),translation=(0,0,-1),
              children=[
              Shape(DEF='SemiCircle',
                geometry=Arc2D(endAngle=3.1415926536),
                appearance=Appearance(
                  material=Material(
                    IS=IS(
                      connect=[
                      connect(nodeField='emissiveColor',protoField='color')]))))]),
            #  Right arc 
            Transform(rotation=(0,-1,0,1.57),
              children=[
              Transform(rotation=(-1,0,0,1.57),translation=(0,0,-1),
                children=[
                Shape(USE='SemiCircle')])]),
            #  Left arc 
            Transform(rotation=(0,1,0,1.57),
              children=[
              Transform(rotation=(-1,0,0,1.57),translation=(0,0,-1),
                children=[
                Shape(USE='SemiCircle')])]),
            #  Bottom arc 
            Transform(rotation=(1,0,0,1.57),translation=(0,0,1),
              children=[
              Shape(USE='SemiCircle')]),
            #  Symbol Modifier 
            Transform(rotation=(1,0,0,-1.57),translation=(0,0,-1.1),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(
                    IS=IS(
                      connect=[
                      connect(nodeField='diffuseColor',protoField='labelColor')]))),
                geometry=Text(
                  IS=IS(
                    connect=[
                    connect(nodeField='string',protoField='symbolModifier')]),
                  fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=2)))])])])])),
    ProtoDeclare(appinfo='NTDS Symbology for surface vessel, classification unknown',name='SurfaceUnknown',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='SFColor',value=(0.8,0.8,0.8))]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          ProtoInstance(name='SymbolVector',
            fieldValue=[
            fieldValue(name='color',value=[(1,1,0)]),
            fieldValue(name='labelColor',value=(1,1,0))]),
          Billboard(
            #  Symbol Geometry Top arc 
            children=[
            Transform(rotation=(-1,0,0,1.57),translation=(0,0,-1),
              children=[
              Shape(DEF='SemiCircle2',
                geometry=Arc2D(endAngle=3.1415926536),
                appearance=Appearance(
                  material=Material(
                    IS=IS(
                      connect=[
                      connect(nodeField='emissiveColor',protoField='color')]))))]),
            #  Right arc 
            Transform(rotation=(0,-1,0,1.57),
              children=[
              Transform(rotation=(-1,0,0,1.57),translation=(0,0,-1),
                children=[
                Shape(USE='SemiCircle2')])]),
            #  Left arc 
            Transform(rotation=(0,1,0,1.57),
              children=[
              Transform(rotation=(-1,0,0,1.57),translation=(0,0,-1),
                children=[
                Shape(USE='SemiCircle2')])]),
            #  Bottom arc 
            Transform(rotation=(1,0,0,1.57),translation=(0,0,1),
              children=[
              Shape(USE='SemiCircle2')])])])])),
    ProtoDeclare(appinfo='NTDS Symbology for surface vessel, classification friendly',name='SurfaceFriend',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='MFColor',value=[(0.8,0.8,0.8)])]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          ProtoInstance(name='SymbolVector',
            fieldValue=[
            fieldValue(name='color',value=[(0,0,1)]),
            fieldValue(name='labelColor',value=(0,0,1))]),
          Billboard(
            children=[
            Transform(
              #  Symbol Geometry 
              children=[
              Shape(
                geometry=IndexedLineSet(colorIndex=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],colorPerVertex=False,coordIndex=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33],
                  coord=Coordinate(point=[(0,0,-1),(0.195,0,-0.981),(0.382,0,-0.924),(0.555,0,-0.832),(0.707,0,-0.708),(0.831,0,-0.556),(0.923,0,-0.383),(0.98,0,-0.196),(1,0,0),(0.98,0,0.195),(0.923,0,0.382),(0.831,0,0.555),(0.707,0,0.707),(0.555,0,0.831),(0.382,0,0.923),(0.195,0,0.98),(0,0,1),(-0.195,0,0.98),(-0.382,0,0.923),(-0.555,0,0.831),(-0.707,0,0.707),(-0.831,0,0.555),(-0.923,0,0.382),(-0.98,0,0.195),(-1,0,0),(-0.981,0,-0.195),(-0.924,0,-0.382),(-0.832,0,-0.555),(-0.708,0,-0.707),(-0.556,0,-0.831),(-0.383,0,-0.923),(-0.196,0,-0.98),(0,0,-1),(0.195,0,-0.981)]),
                  color=Color(
                    IS=IS(
                      connect=[
                      connect(nodeField='color',protoField='color')]))))])])])])),
    ProtoDeclare(appinfo='NTDS Symbology for surface vessel, classification neutral',name='SurfaceNeutral',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='MFColor',value=[(0.8,0.8,0.8)])]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          ProtoInstance(name='SymbolVector',
            fieldValue=[
            fieldValue(name='color',value=[(0,1,0)]),
            fieldValue(name='labelColor',value=(0,1,0))]),
          Billboard(
            children=[
            Transform(
              #  Symbol Geometry 
              children=[
              Shape(
                geometry=IndexedLineSet(colorIndex=[0,0,0,0,0],colorPerVertex=False,coordIndex=[0,1,2,3,0],
                  coord=Coordinate(point=[(-1.0,0,1.0),(1.0,0,1.0),(1.0,0,-1.0),(-1.0,0,-1.0)]),
                  color=Color(
                    IS=IS(
                      connect=[
                      connect(nodeField='color',protoField='color')]))))])])])])),
    ProtoDeclare(name='SurfaceHostile',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='MFColor',value=[(0.8,0.8,0.8)])]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          ProtoInstance(name='SymbolVector',
            fieldValue=[
            fieldValue(name='color',value=[(1,0,0)]),
            fieldValue(name='labelColor',value=(1,0,0))]),
          Billboard(
            children=[
            Transform(rotation=(0,1,0,.785),
              #  Symbol Geometry 
              children=[
              Shape(
                geometry=IndexedLineSet(colorIndex=[0,0,0,0,0],colorPerVertex=False,coordIndex=[0,1,2,3,0],
                  coord=Coordinate(point=[(-1.0,0,1.0),(1.0,0,1.0),(1.0,0,-1.0),(-1.0,0,-1.0)]),
                  color=Color(
                    IS=IS(
                      connect=[
                      connect(nodeField='color',protoField='color')]))))])])])])),
    ProtoDeclare(appinfo='NTDS Symbology for surface vessel, classification assumed friendly',name='SurfaceAssumedFriend',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='MFColor',value=[(0.8,0.8,0.8)]),
        field(accessType='inputOutput',appinfo='Color for labels',name='labelColor',type='SFColor',value=(0.8,0.8,0.8)),
        field(accessType='inputOutput',appinfo='Symbol Modifier',name='symbolModifier',type='MFString')]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          ProtoInstance(name='SymbolVector',
            fieldValue=[
            fieldValue(name='color',value=[(0,0,1)]),
            fieldValue(name='labelColor',value=(0,0,1))]),
          Billboard(
            children=[
            Transform(
              #  TODO: Save -> Symbol Geometry (broken circle) 
              #  Shape> <IndexedLineSet colorIndex='0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0' colorPerVertex='false' coordIndex='0 1 -1 2 3 -1 4 5 -1 6 7 -1 8 9 -1 10 11 -1 12 13 -1 14 15 -1 16 17 -1 18 19 -1 20 21'> <Coordinate point='0 0 -1 0.195 0 -0.981 0.555 0 -0.832 0.707 0 -0.708 0.923 0 -0.383 0.98 0 -0.196 0.98 0 0.195 0.923 0 0.382 0.707 0 0.707 0.555 0 0.831 0.195 0 0.98 0 0 1 -0.382 0 0.923 -0.555 0 0.831 -0.831 0 0.555 -0.923 0 0.382 -1 0 0 -0.981 0 -0.195 -0.832 0 -0.555 -0.708 0 -0.707 -0.383 0 -0.923 -0.196 0 -0.98'/> <Color> <IS> <connect nodeField='color' protoField='color'/> </IS> </Color> </IndexedLineSet> </Shape 
              #  Symbol Geometry 
              children=[
              Shape(
                geometry=IndexedLineSet(colorIndex=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],colorPerVertex=False,coordIndex=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33],
                  coord=Coordinate(point=[(0,0,-1),(0.195,0,-0.981),(0.382,0,-0.924),(0.555,0,-0.832),(0.707,0,-0.708),(0.831,0,-0.556),(0.923,0,-0.383),(0.98,0,-0.196),(1,0,0),(0.98,0,0.195),(0.923,0,0.382),(0.831,0,0.555),(0.707,0,0.707),(0.555,0,0.831),(0.382,0,0.923),(0.195,0,0.98),(0,0,1),(-0.195,0,0.98),(-0.382,0,0.923),(-0.555,0,0.831),(-0.707,0,0.707),(-0.831,0,0.555),(-0.923,0,0.382),(-0.98,0,0.195),(-1,0,0),(-0.981,0,-0.195),(-0.924,0,-0.382),(-0.832,0,-0.555),(-0.708,0,-0.707),(-0.556,0,-0.831),(-0.383,0,-0.923),(-0.196,0,-0.98),(0,0,-1),(0.195,0,-0.981)]),
                  color=Color(
                    IS=IS(
                      connect=[
                      connect(nodeField='color',protoField='color')]))))]),
            #  Symbol Modifier 
            Transform(rotation=(1,0,0,-1.57),translation=(1,0,-1.2),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(
                    IS=IS(
                      connect=[
                      connect(nodeField='diffuseColor',protoField='labelColor')]))),
                geometry=Text(
                  IS=IS(
                    connect=[
                    connect(nodeField='string',protoField='symbolModifier')]),
                  fontStyle=FontStyle(justify=["BEGIN","BEGIN"],size=0.5)))])])])])),
    ProtoDeclare(appinfo='NTDS Symbology for surface vessel, classification suspected hostile',name='SurfaceSuspect',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='MFColor',value=[(0.8,0.8,0.8)]),
        field(accessType='inputOutput',appinfo='Color for labels',name='labelColor',type='SFColor',value=(0.8,0.8,0.8)),
        field(accessType='inputOutput',appinfo='Symbol Modifier',name='symbolModifier',type='MFString')]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          ProtoInstance(name='SymbolVector',
            fieldValue=[
            fieldValue(name='color',value=[(1,0,0)]),
            fieldValue(name='labelColor',value=(1,0,0))]),
          Billboard(
            children=[
            Transform(rotation=(0,1,0,.785),
              #  TODO: Save -> Symbol Geometry (broken lined square) 
              #  Shape> <IndexedLineSet colorIndex='0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0' colorPerVertex='false' coordIndex='0 1 -1 2 3 -1 4 5 -1 6 7 8 -1 9 10 -1 11 12 -1 13 14 15 -1 16 17 -1 18 19 -1 20 21 22 -1 23 24 -1 25 26 -1 27 28'> <Coordinate point='-1.0 0 1.0 -0.8 0 1.0 -0.4 0 1.0 -0.2 0 1.0 0.2 0 1.0 0.4 0 1.0 0.8 0 1.0 1.0 0 1.0 1.0 0 0.8 1.0 0 0.4 1.0 0 0.2 1.0 0 -0.2 1.0 0 -0.4 1.0 0 -0.8 1.0 0 -1.0 0.8 0 -1.0 0.4 0 -1.0 0.2 0 -1.0 -0.2 0 -1.0 -0.4 0 -1.0 -0.8 0 -1.0 -1.0 0 -1.0 -1.0 0 -0.8 -1.0 0 -0.4 -1.0 0 -0.2 -1.0 0 0.2 -1.0 0 0.4 -1.0 0 0.8 -1.0 0 1.0'/> <Color> <IS> <connect nodeField='color' protoField='color'/> </IS> </Color> </IndexedLineSet> </Shape 
              #  Symbol Geometry 
              children=[
              Shape(
                geometry=IndexedLineSet(colorIndex=[0,0,0,0,0],colorPerVertex=False,coordIndex=[0,1,2,3,0],
                  coord=Coordinate(point=[(-1.0,0,1.0),(1.0,0,1.0),(1.0,0,-1.0),(-1.0,0,-1.0)]),
                  color=Color(
                    IS=IS(
                      connect=[
                      connect(nodeField='color',protoField='color')]))))]),
            #  Symbol Modifier 
            Transform(rotation=(1,0,0,-1.57),translation=(1,0,-1.2),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(
                    IS=IS(
                      connect=[
                      connect(nodeField='diffuseColor',protoField='labelColor')]))),
                geometry=Text(
                  IS=IS(
                    connect=[
                    connect(nodeField='string',protoField='symbolModifier')]),
                  fontStyle=FontStyle(justify=["BEGIN","BEGIN"],size=0.5)))])])])])),
    #  Air Units 
    ProtoDeclare(appinfo='NTDS Symbology for air vessel, classification pending',name='AirPending',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='SFColor',value=(0.8,0.8,0.8)),
        field(accessType='inputOutput',appinfo='Color for labels',name='labelColor',type='SFColor',value=(0.8,0.8,0.8)),
        field(accessType='inputOutput',appinfo='Symbol Modifier',name='symbolModifier',type='MFString')]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          ProtoInstance(name='SymbolVector',
            fieldValue=[
            fieldValue(name='color',value=[(1,1,0)]),
            fieldValue(name='labelColor',value=(1,1,0))]),
          Billboard(
            #  Symbol Geometry Top arc 
            children=[
            Transform(rotation=(-1,0,0,1.57),translation=(0,0,-1),
              children=[
              Shape(DEF='SemiCircle3',
                geometry=Arc2D(endAngle=3.1415926536),
                appearance=Appearance(
                  material=Material(
                    IS=IS(
                      connect=[
                      connect(nodeField='emissiveColor',protoField='color')]))))]),
            #  Right arc 
            Transform(rotation=(0,-1,0,1.57),
              children=[
              Transform(rotation=(-1,0,0,1.57),translation=(0,0,-1),
                children=[
                Shape(USE='SemiCircle3')])]),
            #  Left arc 
            Transform(rotation=(0,1,0,1.57),
              children=[
              Transform(rotation=(-1,0,0,1.57),translation=(0,0,-1),
                children=[
                Shape(USE='SemiCircle3')])]),
            #  Symbol Modifier 
            Transform(rotation=(1,0,0,-1.57),translation=(0,0,-1.1),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(
                    IS=IS(
                      connect=[
                      connect(nodeField='diffuseColor',protoField='labelColor')]))),
                geometry=Text(
                  IS=IS(
                    connect=[
                    connect(nodeField='string',protoField='symbolModifier')]),
                  fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=2)))])])])])),
    ProtoDeclare(appinfo='NTDS Symbology for air vessel, classification unknown',name='AirUnknown',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='SFColor',value=(0.8,0.8,0.8))]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          ProtoInstance(name='SymbolVector',
            fieldValue=[
            fieldValue(name='color',value=[(1,1,0)]),
            fieldValue(name='labelColor',value=(1,1,0))]),
          Billboard(
            #  Symbol Geometry Top arc 
            children=[
            Transform(rotation=(-1,0,0,1.57),translation=(0,0,-1),
              children=[
              Shape(DEF='SemiCircle4',
                geometry=Arc2D(endAngle=3.1415926536),
                appearance=Appearance(
                  material=Material(
                    IS=IS(
                      connect=[
                      connect(nodeField='emissiveColor',protoField='color')]))))]),
            #  Right arc 
            Transform(rotation=(0,-1,0,1.57),
              children=[
              Transform(rotation=(-1,0,0,1.57),translation=(0,0,-1),
                children=[
                Shape(USE='SemiCircle4')])]),
            #  Left arc 
            Transform(rotation=(0,1,0,1.57),
              children=[
              Transform(rotation=(-1,0,0,1.57),translation=(0,0,-1),
                children=[
                Shape(USE='SemiCircle4')])])])])])),
    ProtoDeclare(appinfo='NTDS Symbology for air vessel, classification friendly',name='AirFriend',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='MFColor',value=[(0.8,0.8,0.8)])]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          ProtoInstance(name='SymbolVector',
            fieldValue=[
            fieldValue(name='color',value=[(0,0,1)]),
            fieldValue(name='labelColor',value=(0,0,1))]),
          Billboard(
            children=[
            Transform(rotation=(0,1,0,3.14),
              #  Symbol Geometry 
              children=[
              Shape(
                geometry=IndexedLineSet(colorIndex=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],colorPerVertex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16],
                  coord=Coordinate(point=[(1,0,0),(0.98,0,0.195),(0.923,0,0.382),(0.831,0,0.555),(0.707,0,0.707),(0.555,0,0.831),(0.382,0,0.923),(0.195,0,0.98),(0,0,1),(-0.195,0,0.98),(-0.382,0,0.923),(-0.555,0,0.831),(-0.707,0,0.707),(-0.831,0,0.555),(-0.923,0,0.382),(-0.98,0,0.195),(-1,0,0)]),
                  color=Color(
                    IS=IS(
                      connect=[
                      connect(nodeField='color',protoField='color')]))))])])])])),
    ProtoDeclare(appinfo='NTDS Symbology for air vessel, classification neutral',name='AirNeutral',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='MFColor',value=[(0.8,0.8,0.8)])]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          ProtoInstance(name='SymbolVector',
            fieldValue=[
            fieldValue(name='color',value=[(0,1,0)]),
            fieldValue(name='labelColor',value=(0,1,0))]),
          Billboard(
            children=[
            Transform(
              #  Symbol Geometry 
              children=[
              Shape(
                geometry=IndexedLineSet(colorIndex=[0,0,0,0],colorPerVertex=False,coordIndex=[0,1,2,3],
                  coord=Coordinate(point=[(-1.0,0,0),(-1.0,0,-1.0),(1.0,0,-1.0),(1.0,0,0)]),
                  color=Color(
                    IS=IS(
                      connect=[
                      connect(nodeField='color',protoField='color')]))))])])])])),
    ProtoDeclare(appinfo='NTDS Symbology for air vessel, classification hostile',name='AirHostile',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='MFColor',value=[(0.8,0.8,0.8)])]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          ProtoInstance(name='SymbolVector',
            fieldValue=[
            fieldValue(name='color',value=[(1,0,0)]),
            fieldValue(name='labelColor',value=(1,0,0))]),
          Billboard(
            children=[
            Transform(rotation=(0,1,0,2.295),
              #  Symbol Geometry 
              children=[
              Shape(
                geometry=IndexedLineSet(colorIndex=[0,0,0],colorPerVertex=False,coordIndex=[0,1,2],
                  coord=Coordinate(point=[(-1.0,0,1.0),(1.0,0,1.0),(1.0,0,-1.0)]),
                  color=Color(
                    IS=IS(
                      connect=[
                      connect(nodeField='color',protoField='color')]))))])])])])),
    ProtoDeclare(appinfo='NTDS Symbology for air vessel, classification assumed friendly',name='AirAssumedFriend',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='MFColor',value=[(0.8,0.8,0.8)]),
        field(accessType='inputOutput',appinfo='Color for labels',name='labelColor',type='SFColor',value=(0.8,0.8,0.8)),
        field(accessType='inputOutput',appinfo='Symbol Modifier',name='symbolModifier',type='MFString')]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          ProtoInstance(name='SymbolVector',
            fieldValue=[
            fieldValue(name='color',value=[(0,0,1)]),
            fieldValue(name='labelColor',value=(0,0,1))]),
          Billboard(
            children=[
            Transform(rotation=(0,1,0,1.57),
              #  Symbol Geometry 
              children=[
              Shape(
                geometry=IndexedLineSet(colorIndex=[0,0,0,0,0,0,0,0,0,0,0,0],colorPerVertex=False,coordIndex=[0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11],
                  coord=Coordinate(point=[(0,0,-1),(0.195,0,-0.981),(0.555,0,-0.832),(0.707,0,-0.708),(0.923,0,-0.383),(0.98,0,-0.196),(0.98,0,0.195),(0.923,0,0.382),(0.707,0,0.707),(0.555,0,0.831),(0.195,0,0.98),(0,0,1)]),
                  color=Color(
                    IS=IS(
                      connect=[
                      connect(nodeField='color',protoField='color')]))))]),
            #  Symbol Modifier 
            Transform(rotation=(1,0,0,-1.57),translation=(1,0,-1.2),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(
                    IS=IS(
                      connect=[
                      connect(nodeField='diffuseColor',protoField='labelColor')]))),
                geometry=Text(
                  IS=IS(
                    connect=[
                    connect(nodeField='string',protoField='symbolModifier')]),
                  fontStyle=FontStyle(justify=["BEGIN","BEGIN"],size=0.5)))])])])])),
    ProtoDeclare(appinfo='NTDS Symbology for air vessel, classification suspect',name='AirSuspect',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='MFColor',value=[(0.8,0.8,0.8)]),
        field(accessType='inputOutput',appinfo='Color for labels',name='labelColor',type='SFColor',value=(0.8,0.8,0.8)),
        field(accessType='inputOutput',appinfo='Symbol Modifier',name='symbolModifier',type='MFString')]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          ProtoInstance(name='SymbolVector',
            fieldValue=[
            fieldValue(name='color',value=[(1,0,0)]),
            fieldValue(name='labelColor',value=(1,0,0))]),
          Billboard(
            children=[
            Transform(rotation=(0,1,0,2.295),
              children=[
              Shape(
                geometry=IndexedLineSet(colorIndex=[0,0,0,0,0],colorPerVertex=False,coordIndex=[0,1,2,3,0],
                  coord=Coordinate(point=[(-1.0,0,1.0),(1.0,0,1.0),(1.0,0,-1.0),(-1.0,0,-1.0)]),
                  color=Color(
                    IS=IS(
                      connect=[
                      connect(nodeField='color',protoField='color')]))))]),
            #  Symbol Modifier 
            Transform(rotation=(1,0,0,-1.57),translation=(1,0,-1.2),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(
                    IS=IS(
                      connect=[
                      connect(nodeField='diffuseColor',protoField='labelColor')]))),
                geometry=Text(
                  IS=IS(
                    connect=[
                    connect(nodeField='string',protoField='symbolModifier')]),
                  fontStyle=FontStyle(justify=["BEGIN","BEGIN"],size=0.5)))])])])])),
    #  Sub-Surface Units 
    ProtoDeclare(appinfo='NTDS Symbology for subsurface vessel, classification pending',name='SubSurfacePending',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='SFColor',value=(0.8,0.8,0.8)),
        field(accessType='inputOutput',appinfo='Color for labels',name='labelColor',type='SFColor',value=(0.8,0.8,0.8)),
        field(accessType='inputOutput',appinfo='Symbol Modifier',name='symbolModifier',type='MFString')]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          ProtoInstance(name='SymbolVector',
            fieldValue=[
            fieldValue(name='color',value=[(1,1,0)]),
            fieldValue(name='labelColor',value=(1,1,0))]),
          Billboard(
            #  Symbol Geometry Right arc 
            children=[
            Transform(rotation=(0,-1,0,1.57),
              children=[
              Transform(rotation=(-1,0,0,1.57),translation=(0,0,-1),
                children=[
                Shape(DEF='SemiCircle5',
                  geometry=Arc2D(endAngle=3.1415926536),
                  appearance=Appearance(
                    material=Material(
                      IS=IS(
                        connect=[
                        connect(nodeField='emissiveColor',protoField='color')]))))])]),
            #  Left arc 
            Transform(rotation=(0,1,0,1.57),
              children=[
              Transform(rotation=(-1,0,0,1.57),translation=(0,0,-1),
                children=[
                Shape(USE='SemiCircle5')])]),
            #  Bottom arc 
            Transform(rotation=(1,0,0,1.57),translation=(0,0,1),
              children=[
              Shape(USE='SemiCircle5')]),
            #  Symbol Modifier 
            Transform(rotation=(1,0,0,-1.57),translation=(0,0,-1.1),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(
                    IS=IS(
                      connect=[
                      connect(nodeField='diffuseColor',protoField='labelColor')]))),
                geometry=Text(
                  IS=IS(
                    connect=[
                    connect(nodeField='string',protoField='symbolModifier')]),
                  fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=2)))])])])])),
    ProtoDeclare(appinfo='NTDS Symbology for subsurface vessel, classification unknown',name='SubSurfaceUnknown',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='SFColor',value=(0.8,0.8,0.8))]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          ProtoInstance(name='SymbolVector',
            fieldValue=[
            fieldValue(name='color',value=[(1,1,0)]),
            fieldValue(name='labelColor',value=(1,1,0))]),
          Billboard(
            #  Symbol Geometry Right arc 
            children=[
            Transform(rotation=(0,-1,0,1.57),
              children=[
              Transform(rotation=(-1,0,0,1.57),translation=(0,0,-1),
                children=[
                Shape(DEF='SemiCircle6',
                  geometry=Arc2D(endAngle=3.1415926536),
                  appearance=Appearance(
                    material=Material(
                      IS=IS(
                        connect=[
                        connect(nodeField='emissiveColor',protoField='color')]))))])]),
            #  Left arc 
            Transform(rotation=(0,1,0,1.57),
              children=[
              Transform(rotation=(-1,0,0,1.57),translation=(0,0,-1),
                children=[
                Shape(USE='SemiCircle6')])]),
            #  Bottom arc 
            Transform(rotation=(1,0,0,1.57),translation=(0,0,1),
              children=[
              Shape(USE='SemiCircle6')])])])])),
    ProtoDeclare(appinfo='NTDS Symbology for subsurface vessel, classification friendly',name='SubSurfaceFriend',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='MFColor',value=[(0.8,0.8,0.8)])]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          ProtoInstance(name='SymbolVector',
            fieldValue=[
            fieldValue(name='color',value=[(0,0,1)]),
            fieldValue(name='labelColor',value=(0,0,1))]),
          Billboard(
            children=[
            Transform(
              #  Symbol Geometry 
              children=[
              Shape(
                geometry=IndexedLineSet(colorIndex=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],colorPerVertex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16],
                  coord=Coordinate(point=[(1,0,0),(0.98,0,0.195),(0.923,0,0.382),(0.831,0,0.555),(0.707,0,0.707),(0.555,0,0.831),(0.382,0,0.923),(0.195,0,0.98),(0,0,1),(-0.195,0,0.98),(-0.382,0,0.923),(-0.555,0,0.831),(-0.707,0,0.707),(-0.831,0,0.555),(-0.923,0,0.382),(-0.98,0,0.195),(-1,0,0)]),
                  color=Color(
                    IS=IS(
                      connect=[
                      connect(nodeField='color',protoField='color')]))))])])])])),
    ProtoDeclare(appinfo='NTDS Symbology for subsurface vessel, classification neutral',name='SubSurfaceNeutral',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='MFColor',value=[(0.8,0.8,0.8)])]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          ProtoInstance(name='SymbolVector',
            fieldValue=[
            fieldValue(name='color',value=[(0,1,0)]),
            fieldValue(name='labelColor',value=(0,1,0))]),
          Billboard(
            children=[
            Transform(rotation=(0,1,0,3.14),
              #  Symbol Geometry 
              children=[
              Shape(
                geometry=IndexedLineSet(colorIndex=[0,0,0,0],colorPerVertex=False,coordIndex=[0,1,2,3],
                  coord=Coordinate(point=[(-1.0,0,0),(-1.0,0,-1.0),(1.0,0,-1.0),(1.0,0,0)]),
                  color=Color(
                    IS=IS(
                      connect=[
                      connect(nodeField='color',protoField='color')]))))])])])])),
    ProtoDeclare(appinfo='NTDS Symbology for subsurface vessel, classification hostile',name='SubSurfaceHostile',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='MFColor',value=[(0.8,0.8,0.8)])]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          ProtoInstance(name='SymbolVector',
            fieldValue=[
            fieldValue(name='color',value=[(1,0,0)]),
            fieldValue(name='labelColor',value=(1,0,0))]),
          Billboard(
            children=[
            Transform(rotation=(0,1,0,-.785),
              #  Symbol Geometry 
              children=[
              Shape(
                geometry=IndexedLineSet(colorIndex=[0,0,0],colorPerVertex=False,coordIndex=[0,1,2],
                  coord=Coordinate(point=[(-1.0,0,1.0),(1.0,0,1.0),(1.0,0,-1.0)]),
                  color=Color(
                    IS=IS(
                      connect=[
                      connect(nodeField='color',protoField='color')]))))])])])])),
    ProtoDeclare(appinfo='NTDS Symbology for subsurface vessel, classification assumed friendly',name='SubSurfaceAssumedFriend',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='MFColor',value=[(0.8,0.8,0.8)]),
        field(accessType='inputOutput',appinfo='Color for labels',name='labelColor',type='SFColor',value=(0.8,0.8,0.8)),
        field(accessType='inputOutput',appinfo='Symbol Modifier',name='symbolModifier',type='MFString')]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          ProtoInstance(name='SymbolVector',
            fieldValue=[
            fieldValue(name='color',value=[(0,0,1)]),
            fieldValue(name='labelColor',value=(0,0,1))]),
          Billboard(
            children=[
            Transform(rotation=(0,1,0,-1.57),
              #  Symbol Geometry 
              children=[
              Shape(
                geometry=IndexedLineSet(colorIndex=[0,0,0,0,0,0,0,0,0,0,0,0],colorPerVertex=False,coordIndex=[0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11],
                  coord=Coordinate(point=[(0,0,-1),(0.195,0,-0.981),(0.555,0,-0.832),(0.707,0,-0.708),(0.923,0,-0.383),(0.98,0,-0.196),(0.98,0,0.195),(0.923,0,0.382),(0.707,0,0.707),(0.555,0,0.831),(0.195,0,0.98),(0,0,1)]),
                  color=Color(
                    IS=IS(
                      connect=[
                      connect(nodeField='color',protoField='color')]))))]),
            #  Symbol Modifier 
            Transform(rotation=(1,0,0,-1.57),translation=(1,0,-1.2),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(
                    IS=IS(
                      connect=[
                      connect(nodeField='diffuseColor',protoField='labelColor')]))),
                geometry=Text(
                  IS=IS(
                    connect=[
                    connect(nodeField='string',protoField='symbolModifier')]),
                  fontStyle=FontStyle(justify=["BEGIN","BEGIN"],size=0.5)))])])])])),
    ProtoDeclare(appinfo='NTDS Symbology for subsurface vessel, classification suspect',name='SubSurfaceSuspect',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='Single color value for symbol',name='color',type='MFColor',value=[(0.8,0.8,0.8)]),
        field(accessType='inputOutput',appinfo='Color for labels',name='labelColor',type='SFColor',value=(0.8,0.8,0.8)),
        field(accessType='inputOutput',appinfo='Symbol Modifier',name='symbolModifier',type='MFString')]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          ProtoInstance(name='SymbolVector',
            fieldValue=[
            fieldValue(name='color',value=[(1,0,0)]),
            fieldValue(name='labelColor',value=(1,0,0))]),
          Billboard(
            children=[
            Transform(rotation=(0,1,0,-.785),
              children=[
              Shape(
                geometry=IndexedLineSet(colorIndex=[0,0,0,0,0],colorPerVertex=False,coordIndex=[0,1,2,3,0],
                  coord=Coordinate(point=[(-1.0,0,1.0),(1.0,0,1.0),(1.0,0,-1.0),(-1.0,0,-1.0)]),
                  color=Color(
                    IS=IS(
                      connect=[
                      connect(nodeField='color',protoField='color')]))))]),
            #  Symbol Modifier 
            Transform(rotation=(1,0,0,-1.57),translation=(1,0,-1.2),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(
                    IS=IS(
                      connect=[
                      connect(nodeField='diffuseColor',protoField='labelColor')]))),
                geometry=Text(
                  IS=IS(
                    connect=[
                    connect(nodeField='string',protoField='symbolModifier')]),
                  fontStyle=FontStyle(justify=["BEGIN","BEGIN"],size=0.5)))])])])])),
    #  Ground Equipment (exactly the same as Sea Surface symbols) 
    ProtoDeclare(appinfo='NTDS Symbology for Ground Equipment, classification pending',name='GroundEquipmentPending',
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          ProtoInstance(name='SurfacePending',
            fieldValue=[
            fieldValue(name='color',value=(1,1,0)),
            fieldValue(name='labelColor',value=(1,1,0)),
            fieldValue(name='symbolModifier',value=["?"])])])])),
    ProtoDeclare(appinfo='NTDS Symbology for Ground Equipment, classification unknown',name='GroundEquipmentUnknown',
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          ProtoInstance(name='SurfaceUnknown',
            fieldValue=[
            fieldValue(name='color',value=(1,1,0))])])])),
    ProtoDeclare(appinfo='NTDS Symbology for Ground Equipment, classification friendly',name='GroundEquipmentFriend',
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          ProtoInstance(name='SurfaceFriend',
            fieldValue=[
            fieldValue(name='color',value=[(0,0,1)])])])])),
    ProtoDeclare(appinfo='NTDS Symbology for Ground Equipment, classification neutral',name='GroundEquipmentNeutral',
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          ProtoInstance(name='SurfaceNeutral',
            fieldValue=[
            fieldValue(name='color',value=[(0,1,0)])])])])),
    ProtoDeclare(appinfo='NTDS Symbology for Ground Equipment, classification hostile',name='GroundEquipmentHostile',
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          ProtoInstance(name='SurfaceHostile',
            fieldValue=[
            fieldValue(name='color',value=[(1,0,0)])])])])),
    ProtoDeclare(appinfo='NTDS Symbology for Ground Equipment, classification assumed friendly',name='GroundEquipmentAssumedFriend',
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          ProtoInstance(name='SurfaceAssumedFriend',
            fieldValue=[
            fieldValue(name='color',value=[(0,0,1)]),
            fieldValue(name='labelColor',value=(0,0,1)),
            fieldValue(name='symbolModifier',value=["?"])])])])),
    ProtoDeclare(appinfo='NTDS Symbology for Ground Equipment, classification suspect',name='GroundEquipmentSuspect',
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          ProtoInstance(name='SurfaceSuspect',
            fieldValue=[
            fieldValue(name='color',value=[(1,0,0)]),
            fieldValue(name='labelColor',value=(1,0,0)),
            fieldValue(name='symbolModifier',value=["?"])])])])),
    #  Viewable geometry for this scene is anchored text that links to an example showing ExternProtoDeclare usage of BeamCylinder 
    Viewpoint(description='NTDS Symbology Prototypes',position=(0,0,12)),
    Anchor(description='NTDS Symbology Examples',url=["NTDSExternProtoExamples.x3d","../../CommunicationsAndSensors/Beam/NTDSExternProtoExamples.x3d","https://savage.nps.edu/Savage/CommunicationsAndSensors/Beam/NTDSExternProtoExamples.x3d","NTDSExternProtoExamples.wrl","../../CommunicationsAndSensors/Beam/NTDSExternProtoExamples.wrl","https://savage.nps.edu/Savage/CommunicationsAndSensors/Beam/NTDSExternProtoExamples.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,1,1),emissiveColor=(0,1,1))),
        geometry=Text(string=["BeamHemispherePrototype","is a Prototype definition file.","","Select this text to view","NTDSExternProtoExamples"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"]))),
      #  Transparent box to simplify user selection (i.e. "clickability") 
      Shape(
        geometry=Box(size=(12,6,0.1)),
        appearance=Appearance(
          material=Material(transparency=0.8)))])]
    #  ***THE FOLLOWING NOT YET IMPLEMENTED*** 
    #  Space Units 
    #  Ground Installations 
    #  Special Ops Units 
    )
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for NTDSPrototypes.py")
