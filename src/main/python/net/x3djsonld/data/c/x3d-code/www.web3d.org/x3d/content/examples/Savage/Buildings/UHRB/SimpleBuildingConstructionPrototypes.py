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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='SimpleBuildingConstructionPrototypes.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='17 October 2001',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='Prototypes for simple building construction: Floor, Wall, Level and Building.',name='description'),
    meta(content='https://savage.nps.edu/Savage/Buildings/UHRB/SimpleBuildingConstructionPrototypes.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(appinfo='Each Floor cantains the current floor surface plus a ceiling surface for the floor immediately underneath. A Floor does not include exterior or interior wall polygons.',name='Floor',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='Identifying name for this Floor.',name='name',type='SFString'),
        field(accessType='initializeOnly',appinfo='Description info for this construction.',name='description',type='MFString'),
        field(accessType='initializeOnly',appinfo='single-value Coordinate node with dimension x=width y=height z=depth in meters',name='size',type='SFNode',
          children=[
          Coordinate(),]),
        field(accessType='initializeOnly',appinfo='Appearance node with Material colors ImageTexture etc. for this construction.',name='floorAppearance',type='SFNode',
          children=[
          Appearance(DEF='DefaultFloorAppearance',
            material=Material(diffuseColor=(0.2,0.2,0.2)))]),
        field(accessType='initializeOnly',appinfo='Appearance node with Material colors ImageTexture etc. for this construction.',name='ceilingAppearance',type='SFNode',
          children=[
          Appearance(DEF='DefaultCeilingAppearance',
            material=Material(),)]),
        field(accessType='initializeOnly',appinfo='Whether sides are visible.',name='showSides',type='SFBool',value=False),
        field(accessType='outputOnly',appinfo='width of front side of floor aligned with local X axis.',name='width',type='SFFloat'),
        field(accessType='outputOnly',appinfo='height of vertical distance between floor and ceiling directly underneath aligned with local Y axis.',name='height',type='SFFloat'),
        field(accessType='outputOnly',appinfo='depth of horizontal side of floor aligned with local -Z axis.',name='depth',type='SFFloat'),
        field(accessType='outputOnly',appinfo='Indicate whether initialization complete.',name='built',type='SFBool')]),
      ProtoBody=ProtoBody(
        children=[
        Group(DEF='FloorRoot',
          children=[
          Transform(DEF='LowerLeftOutsideCornerLocation',
            children=[
            Shape(DEF='Floor',
              IS=IS(
                connect=[
                connect(nodeField='appearance',protoField='floorAppearance')]),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,0,-1],
                coord=Coordinate(DEF='FloorCoordinate'))),
            Shape(DEF='Ceiling',
              IS=IS(
                connect=[
                connect(nodeField='appearance',protoField='ceilingAppearance')]),
              geometry=IndexedFaceSet(coordIndex=[4,7,6,5,4,-1],
                coord=Coordinate(USE='FloorCoordinate'))),
            Switch(DEF='FloorSidesSwitch',whichChoice=-1,
              children=[
              Shape(DEF='FloorSides',
                IS=IS(
                  connect=[
                  connect(nodeField='appearance',protoField='floorAppearance')]),
                geometry=IndexedFaceSet(coordIndex=[0,3,7,4,-1,3,2,6,7,-1,1,5,6,2,-1,0,4,5,1,-1],solid=False,
                  coord=Coordinate(USE='FloorCoordinate')))])]),
          Script(DEF='FloorConstructionScript',directOutput=True,
            field=[
            field(accessType='initializeOnly',name='name',type='SFString'),
            field(accessType='initializeOnly',name='description',type='MFString'),
            field(accessType='initializeOnly',name='size',type='SFNode'),
            field(accessType='initializeOnly',name='showSides',type='SFBool'),
            field(accessType='outputOnly',name='wallsVisible',type='SFInt32'),
            field(accessType='outputOnly',name='floorPoints',type='MFVec3f'),
            field(accessType='outputOnly',name='width',type='SFFloat'),
            field(accessType='outputOnly',name='height',type='SFFloat'),
            field(accessType='outputOnly',name='depth',type='SFFloat'),
            field(accessType='initializeOnly',name='traceEnabled',type='SFBool',value=True),
            field(accessType='outputOnly',name='built',type='SFBool')],
            IS=IS(
              connect=[
              connect(nodeField='name',protoField='name'),
              connect(nodeField='description',protoField='description'),
              connect(nodeField='size',protoField='size'),
              connect(nodeField='showSides',protoField='showSides'),
              connect(nodeField='width',protoField='width'),
              connect(nodeField='height',protoField='height'),
              connect(nodeField='depth',protoField='depth'),
              connect(nodeField='built',protoField='built')])),
          ROUTE(fromField='floorPoints',fromNode='FloorConstructionScript',toField='point',toNode='FloorCoordinate'),
          ROUTE(fromField='wallsVisible',fromNode='FloorConstructionScript',toField='whichChoice',toNode='FloorSidesSwitch')])])),
    ProtoDeclare(appinfo='Each Wall contains exterior and interior walls.',name='Wall',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='Identifying name for this Wall.',name='name',type='SFString'),
        field(accessType='initializeOnly',appinfo='Description info for this construction.',name='description',type='MFString'),
        field(accessType='initializeOnly',appinfo='single-value Coordinate node with dimension x=width y=height z=depth in meters',name='size',type='SFNode',
          children=[
          Coordinate(point=[(0,0,0)])]),
        field(accessType='initializeOnly',appinfo='Appearance node with Material colors ImageTexture etc. for this construction.',name='interiorAppearance',type='SFNode',
          children=[
          Appearance(DEF='DefaultInteriorAppearance',
            material=Material(diffuseColor=(0.4,0.4,0.4)))]),
        field(accessType='initializeOnly',appinfo='Appearance node with Material colors ImageTexture etc. for this construction.',name='exteriorAppearance',type='SFNode',
          children=[
          Appearance(DEF='DefaultExteriorAppearance',
            material=Material(diffuseColor=(0.6,0.6,0.6)))]),
        field(accessType='initializeOnly',appinfo='Whether sides are visible.',name='showSides',type='SFBool',value=False),
        field(accessType='outputOnly',appinfo='width of horizontal side of wall aligned with local X axis.',name='width',type='SFFloat'),
        field(accessType='outputOnly',appinfo='height of Wall aligned with local Y axis.',name='height',type='SFFloat'),
        field(accessType='outputOnly',appinfo='depth of horizontal thickness of Wall aligned with local -Z axis.',name='depth',type='SFFloat'),
        field(accessType='outputOnly',appinfo='Indicate whether initialization complete.',name='built',type='SFBool')]),
      ProtoBody=ProtoBody(
        children=[
        Group(DEF='WallRoot',
          children=[
          Transform(DEF='LowerLeftOutsideCornerLocationWall',
            children=[
            Shape(DEF='InteriorWall',
              IS=IS(
                connect=[
                connect(nodeField='appearance',protoField='interiorAppearance')]),
              #  only draw interior-facing side for efficiency, and also so that view piercing external wall immediately sees interior 
              geometry=IndexedFaceSet(coordIndex=[4,7,6,5,4,-1],
                coord=Coordinate(DEF='WallCoordinate'))),
            Shape(DEF='ExteriorWall',
              IS=IS(
                connect=[
                connect(nodeField='appearance',protoField='exteriorAppearance')]),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,0,-1],
                coord=Coordinate(USE='WallCoordinate'))),
            Switch(DEF='WallSidesSwitch',whichChoice=-1,
              children=[
              Shape(DEF='WallSides',
                IS=IS(
                  connect=[
                  connect(nodeField='appearance',protoField='exteriorAppearance')]),
                geometry=IndexedFaceSet(coordIndex=[0,3,7,4,-1,3,2,6,7,-1,1,5,6,2,-1,0,4,5,1,-1],
                  coord=Coordinate(USE='WallCoordinate')))])]),
          Script(DEF='WallConstructionScript',directOutput=True,
            field=[
            field(accessType='initializeOnly',name='name',type='SFString'),
            field(accessType='initializeOnly',name='description',type='MFString'),
            field(accessType='initializeOnly',name='size',type='SFNode'),
            field(accessType='initializeOnly',name='showSides',type='SFBool'),
            field(accessType='outputOnly',name='wallsVisible',type='SFInt32'),
            field(accessType='outputOnly',name='coordinatePoints',type='MFVec3f'),
            field(accessType='outputOnly',name='width',type='SFFloat'),
            field(accessType='outputOnly',name='height',type='SFFloat'),
            field(accessType='outputOnly',name='depth',type='SFFloat'),
            field(accessType='initializeOnly',name='traceEnabled',type='SFBool',value=True),
            field(accessType='outputOnly',name='built',type='SFBool')],
            IS=IS(
              connect=[
              connect(nodeField='name',protoField='name'),
              connect(nodeField='description',protoField='description'),
              connect(nodeField='size',protoField='size'),
              connect(nodeField='showSides',protoField='showSides'),
              connect(nodeField='width',protoField='width'),
              connect(nodeField='height',protoField='height'),
              connect(nodeField='depth',protoField='depth'),
              connect(nodeField='built',protoField='built')])),
          ROUTE(fromField='coordinatePoints',fromNode='WallConstructionScript',toField='point',toNode='WallCoordinate'),
          ROUTE(fromField='wallsVisible',fromNode='WallConstructionScript',toField='whichChoice',toNode='WallSidesSwitch')])])),
    ProtoDeclare(appinfo='collection of a Floor and four Walls working in order up from lowest level (i.e. story) of the Building',name='Level',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='Identifying name for this Level.',name='name',type='SFString'),
        field(accessType='initializeOnly',appinfo='Description info for this construction.',name='description',type='MFString'),
        field(accessType='initializeOnly',appinfo='contains single Floor node',name='floor',type='MFNode',
          children=[
          Group(),]),
        field(accessType='initializeOnly',appinfo='contains single front Wall node',name='frontWall',type='MFNode',
          children=[
          ProtoInstance(name='Wall')]),
        field(accessType='initializeOnly',appinfo='contains single right-side Wall node',name='rightWall',type='MFNode',
          children=[
          ProtoInstance(name='Wall')]),
        field(accessType='initializeOnly',appinfo='contains single rear Wall node',name='rearWall',type='MFNode',
          children=[
          ProtoInstance(name='Wall')]),
        field(accessType='initializeOnly',appinfo='contains single left-side Wall node',name='leftWall',type='MFNode',
          children=[
          ProtoInstance(name='Wall')]),
        field(accessType='outputOnly',appinfo='Calculated width of horizontal side of Level aligned with local X axis.',name='width',type='SFFloat'),
        field(accessType='outputOnly',appinfo='Calculated height of Level aligned with local Y axis.',name='height',type='SFFloat'),
        field(accessType='outputOnly',appinfo='Calculated depth of horizontal thickness of Level aligned with local -Z axis.',name='depth',type='SFFloat'),
        field(accessType='outputOnly',appinfo='Indicate whether initialization complete.',name='built',type='SFBool')]),
      ProtoBody=ProtoBody(
        children=[
        Group(DEF='LevelRoot',
          children=[
          Transform(DEF='FloorTransform',
            IS=IS(
              connect=[
              connect(nodeField='children',protoField='floor')])),
          Transform(DEF='FrontWallTransform',
            IS=IS(
              connect=[
              connect(nodeField='children',protoField='frontWall')])),
          Transform(DEF='RightWallTransform',rotation=(0,1,0,1.57079),
            IS=IS(
              connect=[
              connect(nodeField='children',protoField='rightWall')])),
          Transform(DEF='RearWallTransform',rotation=(0,1,0,3.1416),
            IS=IS(
              connect=[
              connect(nodeField='children',protoField='rearWall')])),
          Transform(DEF='LeftWallTransform',rotation=(0,1,0,4.7124),
            IS=IS(
              connect=[
              connect(nodeField='children',protoField='leftWall')])),
          Script(DEF='LevelConstructionScript',directOutput=True,
            field=[
            field(accessType='initializeOnly',name='name',type='SFString'),
            field(accessType='initializeOnly',name='description',type='MFString'),
            field(accessType='initializeOnly',name='floor',type='MFNode'),
            field(accessType='initializeOnly',name='frontWall',type='MFNode'),
            field(accessType='initializeOnly',name='rightWall',type='MFNode'),
            field(accessType='initializeOnly',name='rearWall',type='MFNode'),
            field(accessType='initializeOnly',name='leftWall',type='MFNode'),
            field(accessType='outputOnly',name='width',type='SFFloat'),
            field(accessType='outputOnly',name='height',type='SFFloat'),
            field(accessType='outputOnly',name='depth',type='SFFloat'),
            field(accessType='outputOnly',name='rightTranslation',type='SFVec3f'),
            field(accessType='outputOnly',name='rearTranslation',type='SFVec3f'),
            field(accessType='outputOnly',name='leftTranslation',type='SFVec3f'),
            field(accessType='initializeOnly',name='traceEnabled',type='SFBool',value=True),
            field(accessType='inputOnly',appinfo='New floor or wall initialization may be complete check and recalculate until built',name='recheckUntilBuilt',type='SFTime'),
            field(accessType='outputOnly',name='built',type='SFBool')],
            IS=IS(
              connect=[
              connect(nodeField='name',protoField='name'),
              connect(nodeField='description',protoField='description'),
              connect(nodeField='floor',protoField='floor'),
              connect(nodeField='frontWall',protoField='frontWall'),
              connect(nodeField='rightWall',protoField='rightWall'),
              connect(nodeField='rearWall',protoField='rearWall'),
              connect(nodeField='leftWall',protoField='leftWall'),
              connect(nodeField='width',protoField='width'),
              connect(nodeField='height',protoField='height'),
              connect(nodeField='depth',protoField='depth'),
              connect(nodeField='built',protoField='built')])),
          ROUTE(fromField='rightTranslation',fromNode='LevelConstructionScript',toField='translation',toNode='RightWallTransform'),
          ROUTE(fromField='rearTranslation',fromNode='LevelConstructionScript',toField='translation',toNode='RearWallTransform'),
          ROUTE(fromField='leftTranslation',fromNode='LevelConstructionScript',toField='translation',toNode='LeftWallTransform'),
          Group(DEF='LevelInitializeAfterChildrenReady',
            children=[
            BooleanFilter(DEF='LevelBuiltFilter'),
            BooleanFilter(DEF='LevelBuiltNegation'),
            TimeSensor(DEF='LevelRecalculateUntilBuilt',cycleInterval=0.1,loop=True),
            ROUTE(fromField='built',fromNode='LevelConstructionScript',toField='set_boolean',toNode='LevelBuiltFilter'),
            ROUTE(fromField='inputTrue',fromNode='LevelBuiltFilter',toField='set_boolean',toNode='LevelBuiltNegation'),
            ROUTE(fromField='inputNegate',fromNode='LevelBuiltNegation',toField='enabled',toNode='LevelRecalculateUntilBuilt'),
            ROUTE(fromField='cycleTime',fromNode='LevelRecalculateUntilBuilt',toField='recheckUntilBuilt',toNode='LevelConstructionScript')])])])),
    ProtoDeclare(appinfo='Collect prototypes for levels floors and walls to create a simple Building.',name='Building',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='Identifying name of this Building.',name='name',type='SFString'),
        field(accessType='initializeOnly',appinfo='Description info for this construction.',name='description',type='MFString'),
        field(accessType='initializeOnly',appinfo='whether or not to display author assist tools such as coordinate axes measuring grids etc.',name='authorAssist',type='SFBool',value=True),
        field(accessType='initializeOnly',appinfo='compass direction in degrees of building X axis as seen when regarding front face of building pointing from left side to right side.',name='xHeading',type='SFFloat',value=0.0),
        field(accessType='outputOnly',appinfo='output rotation value calculated from xHeading as (0 1 0 xHeading * 2pi / 360)',name='orientation',type='SFRotation'),
        field(accessType='initializeOnly',appinfo='example value: 120.30 E',name='latitude',type='SFString'),
        field(accessType='initializeOnly',appinfo='example value: 20.45 N',name='longitude',type='SFString'),
        field(accessType='initializeOnly',appinfo='contains array of Level nodes',name='levels',type='MFNode',
          children=[
          ProtoInstance(name='Level')]),
        field(accessType='initializeOnly',appinfo='Geometry for Roof positioned above topmost Level',name='roof',type='SFNode',
          children=[
          Group(),]),
        field(accessType='initializeOnly',appinfo='height value for provided Roof geometry.',name='roofHeight',type='SFFloat',value=0),
        field(accessType='outputOnly',appinfo='Calculated width of horizontal side of Building aligned with local X axis.',name='width',type='SFFloat'),
        field(accessType='outputOnly',appinfo='Calculated height of Building aligned with local Y axis.',name='height',type='SFFloat'),
        field(accessType='outputOnly',appinfo='Calculated depth of horizontal thickness of Building aligned with local -Z axis.',name='depth',type='SFFloat'),
        field(accessType='outputOnly',appinfo='Indicate whether initialization complete.',name='built',type='SFBool')]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Switch(DEF='AuthorAssist1',whichChoice=-1,
            children=[
            Transform(DEF='CoordinateAxesTransform',
              children=[
              Inline(DEF='CoordinateAxes',url=["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"])])]),
          Group(DEF='BuildingRoot',
            children=[
            Transform(DEF='LevelsRoot',
              children=[
              Switch(DEF='AuthorAssist2',whichChoice=-1,
                children=[
                Transform(DEF='AuthorAssistTransform2',
                  children=[
                  Inline(url=["GridXY_20x20Movable.wrl","http://www.web3d.org/x3d/content/examples/Basic/course/GridXY_20x20Movable.wrl","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Movable.wrl","GridXY_20x20Movable.x3d","http://www.web3d.org/x3d/content/examples/Basic/course/GridXY_20x20Movable.x3d","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Movable.x3d"]),
                  Inline(url=["GridXZ_20x20Movable.wrl","http://www.web3d.org/x3d/content/examples/Basic/course/GridXZ_20x20Movable.wrl","https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Movable.wrl","GridXZ_20x20Movable.x3d","http://www.web3d.org/x3d/content/examples/Basic/course/GridXZ_20x20Movable.x3d","https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Movable.x3d"]),
                  Inline(url=["GridYZ_20x20Movable.wrl","http://www.web3d.org/x3d/content/examples/Basic/course/GridYZ_20x20Movable.wrl","https://savage.nps.edu/Savage/Tools/Authoring/GridYZ_20x20Movable.wrl","GridYZ_20x20Movable.x3d","http://www.web3d.org/x3d/content/examples/Basic/course/GridYZ_20x20Movable.x3d","https://savage.nps.edu/Savage/Tools/Authoring/GridYZ_20x20Movable.x3d"])])])]),
            Script(DEF='BuildingConstructionScript',directOutput=True,
              field=[
              field(accessType='initializeOnly',name='name',type='SFString'),
              field(accessType='initializeOnly',name='description',type='MFString'),
              field(accessType='initializeOnly',name='xHeading',type='SFFloat'),
              field(accessType='outputOnly',name='orientation',type='SFRotation'),
              field(accessType='initializeOnly',name='latitude',type='SFString'),
              field(accessType='initializeOnly',name='longitude',type='SFString'),
              field(accessType='initializeOnly',name='authorAssist',type='SFBool'),
              field(accessType='initializeOnly',name='levels',type='MFNode'),
              field(accessType='initializeOnly',name='roof',type='SFNode'),
              field(accessType='initializeOnly',name='roofHeight',type='SFFloat'),
              field(accessType='initializeOnly',name='LevelsRoot',type='SFNode',
                children=[
                Transform(USE='LevelsRoot')]),
              field(accessType='outputOnly',name='width',type='SFFloat'),
              field(accessType='outputOnly',name='height',type='SFFloat'),
              field(accessType='outputOnly',name='depth',type='SFFloat'),
              field(accessType='outputOnly',name='scale',type='SFVec3f'),
              field(accessType='outputOnly',name='authorAssistChoice',type='SFInt32'),
              field(accessType='initializeOnly',name='traceEnabled',type='SFBool',value=True),
              field(accessType='inputOnly',appinfo='New floor or wall initialization may be complete check and recalculate until built',name='recheckUntilBuilt',type='SFTime'),
              field(accessType='outputOnly',name='built',type='SFBool')],
              IS=IS(
                connect=[
                connect(nodeField='name',protoField='name'),
                connect(nodeField='description',protoField='description'),
                connect(nodeField='authorAssist',protoField='authorAssist'),
                connect(nodeField='xHeading',protoField='xHeading'),
                connect(nodeField='orientation',protoField='orientation'),
                connect(nodeField='latitude',protoField='latitude'),
                connect(nodeField='longitude',protoField='longitude'),
                connect(nodeField='levels',protoField='levels'),
                connect(nodeField='roof',protoField='roof'),
                connect(nodeField='roofHeight',protoField='roofHeight'),
                connect(nodeField='width',protoField='width'),
                connect(nodeField='height',protoField='height'),
                connect(nodeField='depth',protoField='depth'),
                connect(nodeField='built',protoField='built')])),
            ROUTE(fromField='authorAssistChoice',fromNode='BuildingConstructionScript',toField='whichChoice',toNode='AuthorAssist1'),
            ROUTE(fromField='authorAssistChoice',fromNode='BuildingConstructionScript',toField='whichChoice',toNode='AuthorAssist2'),
            ROUTE(fromField='scale',fromNode='BuildingConstructionScript',toField='scale',toNode='CoordinateAxesTransform'),
            Group(DEF='BuildingInitializeAfterChildrenReady',
              children=[
              BooleanFilter(DEF='BuildingBuiltFilter'),
              BooleanFilter(DEF='BuildingBuiltNegation'),
              TimeSensor(DEF='BuildingRecalculateUntilBuilt',cycleInterval=0.1,loop=True),
              ROUTE(fromField='built',fromNode='BuildingConstructionScript',toField='set_boolean',toNode='BuildingBuiltFilter'),
              ROUTE(fromField='inputTrue',fromNode='BuildingBuiltFilter',toField='set_boolean',toNode='BuildingBuiltNegation'),
              ROUTE(fromField='inputNegate',fromNode='BuildingBuiltNegation',toField='enabled',toNode='BuildingRecalculateUntilBuilt'),
              ROUTE(fromField='cycleTime',fromNode='BuildingRecalculateUntilBuilt',toField='recheckUntilBuilt',toNode='BuildingConstructionScript')])])])])),
    #  ============================ 
    Viewpoint(description='SimpleBuildingConstructionPrototypes',position=(0,0,12)),
    Background(groundAngle=[1.57],groundColor=[(0.6,0.9,0.6),(0.6,0.9,0.6)],skyColor=[(0.6,0.6,0.9)]),
    Anchor(description='SimpleBuildingConstructionExample',parameter=["target=_blank"],url=["SimpleBuildingConstructionExample.wrl","https://savage.nps.edu/Savage/Buildings/UHRB/SimpleBuildingConstructionExample.wrl","SimpleBuildingConstructionExample.x3d","https://savage.nps.edu/Savage/Buildings/UHRB/SimpleBuildingConstructionExample.x3d"],
      children=[
      Shape(
        geometry=Text(string=["SimpleBuildingConstructionPrototypes","is a prototype definition file","","Click this text to see","SimpleBuildingConstructionExample"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
        appearance=Appearance(
          material=Material(diffuseColor=(0.2,0.2,0.8))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SimpleBuildingConstructionPrototypes.py")
