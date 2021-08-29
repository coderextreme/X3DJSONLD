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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='SimpleBuildingConstructionExample.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='17 October 2001',name='created'),
    meta(content='9 July 2018',name='modified'),
    meta(content='Example use of simple prototypes for building construction: Wall, Floor, Level and Building.',name='description'),
    meta(content='https://savage.nps.edu/Savage/Buildings/UHRB/SimpleBuildingConstructionExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='Each Floor cantains the current floor surface plus a ceiling surface for the floor immediately underneath. A Floor does not include exterior or interior wall polygons.',name='Floor',url=["SimpleBuildingConstructionPrototypes.x3d#Floor","https://savage.nps.edu/Savage/Buildings/UHRB/SimpleBuildingConstructionPrototypes.x3d#Floor","SimpleBuildingConstructionPrototypes.wrl#Floor","https://savage.nps.edu/Savage/Buildings/UHRB/SimpleBuildingConstructionPrototypes.wrl#Floor"],
      field=[
      field(accessType='initializeOnly',appinfo='Identifying name for this Floor.',name='name',type='SFString'),
      field(accessType='initializeOnly',appinfo='Description info for this construction.',name='description',type='MFString'),
      field(accessType='initializeOnly',appinfo='single-value Coordinate node with dimension x=width y=height z=depth in meters',name='size',type='SFNode'),
      field(accessType='initializeOnly',appinfo='Appearance node with Material colors ImageTexture etc. for this construction.',name='floorAppearance',type='SFNode'),
      field(accessType='initializeOnly',appinfo='Appearance node with Material colors ImageTexture etc. for this construction.',name='ceilingAppearance',type='SFNode'),
      field(accessType='initializeOnly',appinfo='Whether sides are visible.',name='showSides',type='SFBool'),
      field(accessType='outputOnly',appinfo='width of front side of floor aligned with local X axis.',name='width',type='SFFloat'),
      field(accessType='outputOnly',appinfo='height of vertical distance between floor and ceiling directly underneath aligned with local Y axis.',name='height',type='SFFloat'),
      field(accessType='outputOnly',appinfo='depth of horizontal side of floor aligned with local -Z axis.',name='depth',type='SFFloat'),
      field(accessType='outputOnly',appinfo='Indicate whether initialization complete.',name='built',type='SFBool')]),
    ExternProtoDeclare(appinfo='Each Wall contains exterior and interior walls.',name='Wall',url=["SimpleBuildingConstructionPrototypes.x3d#Wall","https://savage.nps.edu/Savage/Buildings/UHRB/SimpleBuildingConstructionPrototypes.x3d#Wall","SimpleBuildingConstructionPrototypes.wrl#Wall","https://savage.nps.edu/Savage/Buildings/UHRB/SimpleBuildingConstructionPrototypes.wrl#Wall"],
      field=[
      field(accessType='initializeOnly',appinfo='Identifying name for this Wall.',name='name',type='SFString'),
      field(accessType='initializeOnly',appinfo='Description info for this construction.',name='description',type='MFString'),
      field(accessType='initializeOnly',appinfo='single-value Coordinate node with dimension x=width y=height z=depth in meters',name='size',type='SFNode'),
      field(accessType='initializeOnly',appinfo='Appearance node with Material colors ImageTexture etc. for this construction.',name='interiorAppearance',type='SFNode'),
      field(accessType='initializeOnly',appinfo='Appearance node with Material colors ImageTexture etc. for this construction.',name='exteriorAppearance',type='SFNode'),
      field(accessType='initializeOnly',appinfo='Whether sides are visible.',name='showSides',type='SFBool'),
      field(accessType='outputOnly',appinfo='width of horizontal side of wall aligned with local X axis.',name='width',type='SFFloat'),
      field(accessType='outputOnly',appinfo='height of Wall aligned with local Y axis.',name='height',type='SFFloat'),
      field(accessType='outputOnly',appinfo='depth of horizontal thickness of Wall aligned with local -Z axis.',name='depth',type='SFFloat'),
      field(accessType='outputOnly',appinfo='Indicate whether initialization complete.',name='built',type='SFBool')]),
    ExternProtoDeclare(appinfo='collection of a Floor and four Walls working in order up from lowest level (i.e. story) of the Building',name='Level',url=["SimpleBuildingConstructionPrototypes.x3d#Level","https://savage.nps.edu/Savage/Buildings/UHRB/SimpleBuildingConstructionPrototypes.x3d#Level","SimpleBuildingConstructionPrototypes.wrl#Level","https://savage.nps.edu/Savage/Buildings/UHRB/SimpleBuildingConstructionPrototypes.wrl#Level"],
      field=[
      field(accessType='initializeOnly',appinfo='Identifying name for this Level.',name='name',type='SFString'),
      field(accessType='initializeOnly',appinfo='Description info for this construction.',name='description',type='MFString'),
      field(accessType='initializeOnly',appinfo='contains single Floor node',name='floor',type='MFNode'),
      field(accessType='initializeOnly',appinfo='contains single front Wall node',name='frontWall',type='MFNode'),
      field(accessType='initializeOnly',appinfo='contains single right-side Wall node',name='rightWall',type='MFNode'),
      field(accessType='initializeOnly',appinfo='contains single rear Wall node',name='rearWall',type='MFNode'),
      field(accessType='initializeOnly',appinfo='contains single left-side Wall node',name='leftWall',type='MFNode'),
      field(accessType='outputOnly',appinfo='Calculated width of horizontal side of Level aligned with local X axis.',name='width',type='SFFloat'),
      field(accessType='outputOnly',appinfo='Calculated height of Level aligned with local Y axis.',name='height',type='SFFloat'),
      field(accessType='outputOnly',appinfo='Calculated depth of horizontal thickness of Level aligned with local -Z axis.',name='depth',type='SFFloat'),
      field(accessType='outputOnly',appinfo='Indicate whether initialization complete.',name='built',type='SFBool')]),
    ExternProtoDeclare(appinfo='Collect prototypes for levels floors and walls to create a simple Building.',name='Building',url=["SimpleBuildingConstructionPrototypes.x3d#Building","https://savage.nps.edu/Savage/Buildings/UHRB/SimpleBuildingConstructionPrototypes.x3d#Building","SimpleBuildingConstructionPrototypes.wrl#Building","https://savage.nps.edu/Savage/Buildings/UHRB/SimpleBuildingConstructionPrototypes.wrl#Building"],
      field=[
      field(accessType='initializeOnly',appinfo='Identifying name of this Building.',name='name',type='SFString'),
      field(accessType='initializeOnly',appinfo='Description info for this construction.',name='description',type='MFString'),
      field(accessType='initializeOnly',appinfo='whether or not to display author assist tools such as coordinate axes measuring grids etc.',name='authorAssist',type='SFBool'),
      field(accessType='initializeOnly',appinfo='compass direction in degrees of building X axis as seen when regarding front face of building pointing from left side to right side.',name='xHeading',type='SFFloat'),
      field(accessType='outputOnly',appinfo='output rotation value calculated from xHeading as (0 1 0 xHeading * 2pi / 360)',name='orientation',type='SFRotation'),
      field(accessType='initializeOnly',appinfo='example value: 120.30 E',name='latitude',type='SFString'),
      field(accessType='initializeOnly',appinfo='example value: 20.45 N',name='longitude',type='SFString'),
      field(accessType='initializeOnly',appinfo='contains array of Level nodes',name='levels',type='MFNode'),
      field(accessType='initializeOnly',appinfo='Geometry for Roof positioned above topmost Level',name='roof',type='SFNode'),
      field(accessType='initializeOnly',appinfo='height value for provided Roof geometry.',name='roofHeight',type='SFFloat'),
      field(accessType='outputOnly',appinfo='Calculated width of horizontal side of Building aligned with local X axis.',name='width',type='SFFloat'),
      field(accessType='outputOnly',appinfo='Calculated height of Building aligned with local Y axis.',name='height',type='SFFloat'),
      field(accessType='outputOnly',appinfo='Calculated depth of horizontal thickness of Building aligned with local -Z axis.',name='depth',type='SFFloat'),
      field(accessType='outputOnly',appinfo='Indicate whether initialization complete.',name='built',type='SFBool')]),
    #  ============================ 
    #  example instance 
    Background(groundAngle=[1.57],groundColor=[(0.6,0.9,0.6),(0.6,0.9,0.6)],skyColor=[(0.6,0.6,0.9)]),
    Viewpoint(description='Building, Level, Wall and Floor prototype examples. Next Viewpoints are calculated based on Building size.',orientation=(1,0,0,-0.3),position=(4,9,15)),
    Switch(DEF='Tester',whichChoice=1,
      #  test one child only 
      children=[
      Transform(translation=(-5,0,0),
        children=[
        ProtoInstance(name='Floor',
          fieldValue=[
          fieldValue(name='name',value='hidden1'),
          fieldValue(name='description',value=["simple test floor"]),
          fieldValue(name='size',
            #  point dimensions: width height depth 
            children=[
            Coordinate(point=[(10,0.2,5)])]),
          fieldValue(name='floorAppearance',
            children=[
            Appearance(
              material=Material(diffuseColor=(0.3,0.3,0.1)))]),
          fieldValue(name='ceilingAppearance',
            children=[
            Appearance(
              material=Material(),)]),
          fieldValue(name='showSides',value=True)]),
        ProtoInstance(name='Wall',
          fieldValue=[
          fieldValue(name='name',value='hidden2'),
          fieldValue(name='description',value=["simple test wall"]),
          #  point dimensions: width height depth 
          fieldValue(name='size',
            children=[
            Coordinate(point=[(10,2.5,0.5)])]),
          fieldValue(name='interiorAppearance',
            children=[
            Appearance(
              material=Material(DEF='Green',diffuseColor=(0.3,0.6,0.1)))]),
          fieldValue(name='exteriorAppearance',
            children=[
            Appearance(
              material=Material(DEF='LightBlue',diffuseColor=(0.5,0.5,0.8)))]),
          fieldValue(name='showSides',value=True)])]),
      ProtoInstance(name='Building',
        fieldValue=[
        fieldValue(name='name',value='exemplar'),
        fieldValue(name='description',value=["A set of example building prototype instances."]),
        fieldValue(name='authorAssist',value=True),
        fieldValue(name='xHeading',value=335),
        fieldValue(name='latitude',value='40 52 N'),
        fieldValue(name='longitude',value='126 E'),
        fieldValue(name='levels',
          children=[
          ProtoInstance(DEF='LevelOne',name='Level',
            fieldValue=[
            fieldValue(name='name',value='One'),
            fieldValue(name='description',value=["first level is ground story of building"]),
            fieldValue(name='floor',
              children=[
              ProtoInstance(DEF='BottomFloor',name='Floor',
                fieldValue=[
                fieldValue(name='name',value='bottom'),
                fieldValue(name='description',value=["planar surface for first floor"]),
                fieldValue(name='size',
                  #  point dimensions: width height depth 
                  children=[
                  Coordinate(DEF='FloorSizeCoordinateNode',point=[(10,0.2,5)])]),
                fieldValue(name='floorAppearance',
                  children=[
                  Appearance(DEF='FloorAppearanceNode',
                    material=Material(DEF='Olive',diffuseColor=(0.3,0.3,0.1)))]),
                fieldValue(name='ceilingAppearance',
                  children=[
                  Appearance(DEF='CeilingAppearanceNode',
                    material=Material(DEF='LightGrey'))])])]),
            fieldValue(name='frontWall',
              children=[
              ProtoInstance(name='Wall',
                fieldValue=[
                fieldValue(name='name',value='frontOne'),
                fieldValue(name='description',value=["example front Wall"]),
                fieldValue(name='size',
                  children=[
                  Coordinate(DEF='FacingWallSizeCoordinateNode',point=[(10,2.5,0.5)])]),
                fieldValue(name='interiorAppearance',
                  children=[
                  Appearance(DEF='InteriorAppearanceNode',
                    material=Material(diffuseColor=(0.3,0.3,0.1)))]),
                fieldValue(name='exteriorAppearance',
                  children=[
                  Appearance(DEF='ExteriorAppearanceNode',
                    material=Material(),)])])]),
            fieldValue(name='rightWall',
              children=[
              ProtoInstance(name='Wall',
                fieldValue=[
                fieldValue(name='name',value='rightOne'),
                fieldValue(name='description',value=["example right Wall"]),
                fieldValue(name='size',
                  children=[
                  Coordinate(DEF='SideWallSizeCoordinateNode',point=[(5,2.5,0.5)])]),
                fieldValue(name='interiorAppearance',
                  children=[
                  Appearance(USE='InteriorAppearanceNode')]),
                fieldValue(name='exteriorAppearance',
                  children=[
                  Appearance(DEF='ExteriorAppearanceNode2',
                    material=Material(),
                    texture=ImageTexture(DEF='BrickTexture',repeatS=False,url=["brick.jpg","https://savage.nps.edu/Savage/Buildings/UHRB/brick.jpg","http://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/brick.jpg"]))])])]),
            fieldValue(name='rearWall',
              children=[
              ProtoInstance(name='Wall',
                fieldValue=[
                fieldValue(name='name',value='rearOne'),
                fieldValue(name='description',value=["example rear Wall"]),
                fieldValue(name='size',
                  children=[
                  Coordinate(USE='FacingWallSizeCoordinateNode')]),
                fieldValue(name='interiorAppearance',
                  children=[
                  Appearance(USE='InteriorAppearanceNode')]),
                fieldValue(name='exteriorAppearance',
                  children=[
                  Appearance(USE='ExteriorAppearanceNode')])])]),
            fieldValue(name='leftWall',
              children=[
              ProtoInstance(name='Wall',
                fieldValue=[
                fieldValue(name='name',value='leftOne'),
                fieldValue(name='description',value=["example left Wall"]),
                fieldValue(name='size',
                  children=[
                  Coordinate(USE='SideWallSizeCoordinateNode')]),
                fieldValue(name='interiorAppearance',
                  children=[
                  Appearance(USE='InteriorAppearanceNode')]),
                fieldValue(name='exteriorAppearance',
                  children=[
                  Appearance(USE='ExteriorAppearanceNode2')])])])]),
          ProtoInstance(DEF='LevelTwo',name='Level',
            fieldValue=[
            fieldValue(name='name',value='Two'),
            fieldValue(name='description',value=["second level of building has an open front Wall"]),
            fieldValue(name='floor',
              children=[
              ProtoInstance(USE='BottomFloor')]),
            #  no frontWall, but still need null-node fieldValue to avoid CosmoPlayer crash 
            fieldValue(name='frontWall',
              children=[
              ProtoInstance(name='Wall',
                fieldValue=[
                fieldValue(name='name',value='frontTwo'),
                fieldValue(name='description',value=["test default values are null wall"])])]),
            fieldValue(name='rightWall',
              children=[
              ProtoInstance(name='Wall',
                fieldValue=[
                fieldValue(name='name',value='rightTwo'),
                fieldValue(name='description',value=["example right Wall"]),
                fieldValue(name='size',
                  children=[
                  Coordinate(USE='SideWallSizeCoordinateNode')]),
                fieldValue(name='interiorAppearance',
                  children=[
                  Appearance(DEF='InteriorAppearanceNode2',
                    material=Material(diffuseColor=(0.8,0.8,0.2)))]),
                fieldValue(name='exteriorAppearance',
                  children=[
                  Appearance(DEF='ExteriorAppearanceNode3',
                    material=Material(diffuseColor=(0.8,0.4,0.1)))]),
                fieldValue(name='showSides',value=True)])]),
            fieldValue(name='rearWall',
              children=[
              ProtoInstance(name='Wall',
                fieldValue=[
                fieldValue(name='name',value='rearTwo'),
                fieldValue(name='description',value=["example rear Wall"]),
                fieldValue(name='size',
                  children=[
                  Coordinate(USE='FacingWallSizeCoordinateNode')]),
                fieldValue(name='interiorAppearance',
                  children=[
                  Appearance(USE='InteriorAppearanceNode2')]),
                fieldValue(name='exteriorAppearance',
                  children=[
                  Appearance(USE='ExteriorAppearanceNode3')]),
                fieldValue(name='showSides',value=True)])]),
            fieldValue(name='leftWall',
              children=[
              ProtoInstance(name='Wall',
                fieldValue=[
                fieldValue(name='name',value='leftTwo'),
                fieldValue(name='description',value=["example left Wall"]),
                fieldValue(name='size',
                  children=[
                  Coordinate(USE='SideWallSizeCoordinateNode')]),
                fieldValue(name='interiorAppearance',
                  children=[
                  Appearance(USE='InteriorAppearanceNode2')]),
                fieldValue(name='exteriorAppearance',
                  children=[
                  Appearance(USE='ExteriorAppearanceNode3')]),
                fieldValue(name='showSides',value=True)])])]),
          ProtoInstance(USE='LevelOne')]),
        #  roof can be any geometry. a very simple roof is to re-Use initial Floor. 
        fieldValue(name='roof',
          #  center of Box is at origin, so translate to get front left corner of Box at origin. Also adjust for roof overhang. 
          children=[
          Transform(translation=(5,0.2,-2.5),
            children=[
            Shape(
              geometry=Box(size=(11,0.4,6)),
              appearance=Appearance(
                material=Material(diffuseColor=(0,0,1))))])]),
        fieldValue(name='roofHeight',value=0.4)])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SimpleBuildingConstructionExample.py")
