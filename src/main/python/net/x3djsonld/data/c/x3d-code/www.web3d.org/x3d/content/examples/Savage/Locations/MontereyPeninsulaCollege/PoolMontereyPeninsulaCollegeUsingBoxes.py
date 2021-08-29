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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    meta(content='PoolMontereyPeninsulaCollegeUsingBoxes.x3d',name='title'),
    meta(content='Monterey Peninsula College (MPC) swimming pool, simplest model',name='description'),
    meta(content='Don Brutzman and MV3204 class',name='creator'),
    meta(content='9 April 2010',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='Includes trace diagnostic for changing user navigation from EXAMINE to FLY when binding/unbinding the initial overhead-perspective Viewpoint',name='info'),
    meta(content='TODO information about ROV races',name='reference'),
    meta(content='PoolMontereyPeninsulaCollegeSketch',name='drawing'),
    meta(content='PoolMontereyPeninsulaCollegeDiagram.png',name='Image'),
    meta(content='PoolMontereyPeninsulaCollegeDiagram.vsd',name='Image'),
    meta(content='TODO photo(s) of pool',name='photo'),
    meta(content='X3D swimming pool',name='subject'),
    meta(content='under development',name='warning'),
    meta(content='PoolMontereyPeninsulaCollege.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Locations/MontereyPeninsulaCollege/PoolMontereyPeninsulaCollegeUsingBoxes.x3d',name='identifier'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Put CoordinateAxes with correct directional alignment at pool origin 
    children=[
    Inline(DEF='CoordinateAxes',url=["../../Tools/Authoring/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../Tools/Authoring/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"]),
    #  Only one NavInfo can be bound at a time. Include "ANY" to allow user override. 
    #  Note that our local units here are still meters. 
    NavigationInfo(DEF='NavigationExamineMode',avatarSize=[0.25,1.6,2],speed=5,type=["EXAMINE","FLY","ANY"]),
    NavigationInfo(DEF='NavigationWalkMode',avatarSize=[0.25,1.6,2],speed=5,type=["WALK","ANY"]),
    NavigationInfo(DEF='NavigationFlyMode',avatarSize=[0.25,1.6,2],speed=5,type=["FLY","ANY"]),
    #  TODO add a deck around the edge of the pool to allow WALKing around 
    #  All pool model measurements are in feet, therefore scale them into meters. X is length, Y is height, Z is width. 
    Transform(DEF='ScaleFeetToMeters',scale=(0.305,0.305,0.305),
      #  Box centers are at local coordinate 0 0 0, this translation shifts them to put corner at pool coordinate 0 0 0 
      #  Viewpoints are placed here since their position is recorded in feet using the pool coordinate system 
      children=[
      Viewpoint(DEF='ViewOverhead',centerOfRotation=(37.5,0,32),description='High above looking down from 100 feet above',orientation=(1,0,0,-1.5708),position=(37.5,100,32)),
      ROUTE(fromField='isBound',fromNode='ViewOverhead',toField='set_bind',toNode='NavigationExamineMode'),
      Group(
        #  ======= ROUTE Trace ============================================== 
        children=[
        Script(DEF='Trace_ROUTE_ViewOverhead.isBound_TO_NavigationExamineMode.set_bind',mustEvaluate=True,
          #  Trace ROUTEd values on X3D browser console 
          field=[
          field(accessType='initializeOnly',appinfo='Sampling frequency in seconds (0 means all values)',name='reportInterval',type='SFTime',value=1.0),
          field(accessType='inputOutput',name='traceValue',type='SFBool',value=True),
          field(accessType='initializeOnly',name='timeStampPreviousReport',type='SFTime',value=-1)]),
        ROUTE(fromField='isBound',fromNode='ViewOverhead',toField='traceValue',toNode='Trace_ROUTE_ViewOverhead.isBound_TO_NavigationExamineMode.set_bind')]
        #  ======= ROUTE Trace block complete ===================================================== 
        ),
      #  other Viewpoints do not get EXAMINE navigation type 
      Viewpoint(description='Shallow end left side, from origin',orientation=(0.0067,0.9998,0.0161,-2.3563),position=(-12,6,-12)),
      Viewpoint(description='Pool center left side',orientation=(0,0.9955,0.0949,3.1413),position=(37.52,10,-20)),
      Viewpoint(description='Deep end left side',orientation=(-0.0203,0.9988,0.0451,2.2984),position=(87,6,-12)),
      Viewpoint(description='Deep end center',orientation=(-0.0857,0.9926,0.0857,1.5782),position=(95,10,32)),
      Viewpoint(description='Deep end right side',orientation=(-0.1001,0.994,0.0449,0.8487),position=(87,6,76)),
      Viewpoint(description='Pool center right side',orientation=(-1,0.002,0.0002,0.2235),position=(37.52,10,84)),
      Viewpoint(description='Shallow end right side',orientation=(0.1001,0.994,0.0449,-0.8487),position=(-12,6,76)),
      Viewpoint(description='Shallow end center',orientation=(0.0864,0.99251,0.0864,-1.578318),position=(-20,10,32)),
      Transform(DEF='ShiftBoxCornersToPoolCenter',translation=(37.5,-12.75,32),
        children=[
        Shape(DEF='PoolFloor',
          geometry=Box(size=(75,0.25,64)),
          appearance=Appearance(DEF='AppearanceWall',
            material=Material(diffuseColor=(0.5,0.9,0.9)))),
        Transform(DEF='ShallowWall',translation=(-37.5,6.25,0),
          children=[
          Shape(DEF='ShortWall',
            geometry=Box(size=(0.25,12.75,64)),
            appearance=Appearance(USE='AppearanceWall'))]),
        Transform(DEF='DeepWall',translation=(37.5,6.25,0),
          children=[
          Shape(USE='ShortWall')]),
        Transform(DEF='LeftWall',translation=(0,6.25,-32),
          children=[
          Shape(DEF='LongWall',
            geometry=Box(size=(75,12.75,0.25)),
            appearance=Appearance(USE='AppearanceWall'))]),
        Transform(DEF='RightWall',translation=(0,6.25,32),
          children=[
          Shape(USE='LongWall')]),
        Transform(DEF='DeepFloor',rotation=(0,0,1,0.1732),translation=(32.5,.9,0),
          children=[
          Shape(
            geometry=Box(size=(10.152,0.25,64)),
            appearance=Appearance(USE='AppearanceWall'))]),
        Transform(DEF='DeepFloor2',rotation=(0,0,1,-0.2085),translation=(21,1.4,0),
          children=[
          Shape(
            geometry=Box(size=(13.288,0.25,64)),
            appearance=Appearance(USE='AppearanceWall'))]),
        Transform(DEF='DeepFloor3',rotation=(0,0,1,-0.2783),translation=(7.5,4.75,0),
          children=[
          Shape(
            geometry=Box(size=(14.560,0.25,64)),
            appearance=Appearance(USE='AppearanceWall'))]),
        Transform(DEF='DeepFloor4',rotation=(0,0,1,-0.0476),translation=(-10,7.25,0),
          children=[
          Shape(
            geometry=Box(size=(21.024,0.25,64)),
            appearance=Appearance(USE='AppearanceWall'))]),
        Transform(DEF='DeepFloor5',rotation=(0,0,1,-0.0588),translation=(-29,8.25,0),
          children=[
          Shape(
            geometry=Box(size=(17.029,0.25,64)),
            appearance=Appearance(USE='AppearanceWall'))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PoolMontereyPeninsulaCollegeUsingBoxes.py")
