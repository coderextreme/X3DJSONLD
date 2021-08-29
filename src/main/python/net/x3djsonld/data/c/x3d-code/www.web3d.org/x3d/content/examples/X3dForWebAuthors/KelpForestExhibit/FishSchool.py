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
    meta(content='FishSchool.x3d',name='title'),
    meta(content='Fish Schooling Demo',name='description'),
    meta(content='Stewart Liles, Sean Hynes',name='creator'),
    meta(content='25 September 1998',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpForestDesignPaperWeb3dSymposiumFebruary2002.pdf',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/Teaching3d-KelpForestCaseStudy.pdf',name='reference'),
    meta(content='All content has permissions for free use. Please provide credit to the Naval Postgraduate School (NPS) Modeling Virtual Environments and Simulation (MOVES) Institute.',name='accessRights'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/FishSchool.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='FishSchool.x3d'),
    NavigationInfo(speed=5.0,type=["EXAMINE"],visibilityLimit=250.0),
    Viewpoint(description='Close to School - FS',position=(0.0,1.0,75.0)),
    Viewpoint(description='Nose on Glass - FS',fieldOfView=1.0,position=(0.0,1.0,30.0)),
    Viewpoint(description='Fish Feeding - FS',fieldOfView=1.0,orientation=(1.0,0.0,0.0,-1.57),position=(0.0,40.0,0.0)),
    Viewpoint(description='Left Side - FS',fieldOfView=1.0,orientation=(0.0,1.0,0.0,-1.57),position=(-40.0,0.0,0.0)),
    Viewpoint(description='Right Side - FS',fieldOfView=1.0,orientation=(0.0,1.0,0.0,1.57),position=(40.0,0.0,0.0)),
    Viewpoint(description='Middle Looking Out - FS',jump=False,orientation=(0.0,1.0,0.0,2.2),position=(0.0,0.0,0.0)),
    SpotLight(ambientIntensity=1.0,direction=(0.0,-1.0,0.0),location=(0.0,50.0,0.0)),
    Sound(location=(0,0.1,0),maxBack=50,maxFront=50,minBack=50,minFront=50,
      source=AudioClip(description='Sound for Fish',loop=True,url=["Sound2.wav","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/Sound2.wav"])),
    TimeSensor(DEF='GlobalClock',loop=True),
    Shape(
      appearance=Appearance(
        material=Material(),),
      geometry=IndexedLineSet(coordIndex=[0,1,2,3,0,-1,4,5,6,7,4,-1,0,4,-1,1,5,-1,2,6,-1,3,7],
        coord=Coordinate(point=[(-30.0,30.0,30.0),(30.0,30.0,30.0),(30.0,30.0,-30.0),(-30.0,30.0,-30.0),(-30.0,-30.0,30.0),(30.0,-30.0,30.0),(30.0,-30.0,-30.0),(-30.0,-30.0,-30.0)]))),
    Fog(color=(0.1,0.3,0.1),visibilityRange=70.0),
    Transform(DEF='Fish0',translation=(-5.0,0.0,0.0),
      children=[
      Viewpoint(description='Fish 0 view',fieldOfView=1.8,position=(0.0,1.0,-0.5)),
      Inline(DEF='FishIN',url=["Fish.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/Fish.x3d","Fish.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/Fish.wrl"])]),
    Transform(DEF='Fish1',translation=(-4.0,0.0,0.0),
      children=[
      Viewpoint(description='Fish 1 view',fieldOfView=1.8,position=(0.0,1.0,-0.5)),
      Inline(USE='FishIN')]),
    Transform(DEF='Fish2',translation=(-3.0,0.0,0.0),
      children=[
      Viewpoint(description='Fish 2 view',fieldOfView=1.8,position=(0.0,1.0,-0.5)),
      Inline(USE='FishIN')]),
    Transform(DEF='Fish3',translation=(-2.0,0.0,0.0),
      children=[
      Viewpoint(description='Fish 3 view',fieldOfView=1.8,position=(0.0,1.0,-0.5)),
      Inline(USE='FishIN')]),
    Transform(DEF='Fish4',translation=(-1.0,0.0,0.0),
      children=[
      Viewpoint(description='Fish 4 view',fieldOfView=1.8,position=(0.0,1.0,-0.5)),
      Inline(USE='FishIN')]),
    Transform(DEF='Fish5',
      children=[
      Viewpoint(description='Fish 5 view',fieldOfView=1.8,position=(0.0,1.0,-0.5)),
      Inline(USE='FishIN')]),
    Transform(DEF='Fish6',translation=(1.0,0.0,0.0),
      children=[
      Viewpoint(description='Fish 6 view',fieldOfView=1.8,position=(0.0,1.0,-0.5)),
      Inline(USE='FishIN')]),
    Transform(DEF='Fish7',translation=(2.0,0.0,0.0),
      children=[
      Viewpoint(description='Fish 7 view',fieldOfView=1.8,position=(0.0,1.0,-0.5)),
      Inline(USE='FishIN')]),
    Transform(DEF='Fish8',translation=(3.0,0.0,0.0),
      children=[
      Viewpoint(description='Fish 8 view',fieldOfView=1.8,position=(0.0,1.0,-0.5)),
      Inline(USE='FishIN')]),
    Transform(DEF='Fish9',translation=(4.0,0.0,0.0),
      children=[
      Viewpoint(description='Fish 9 view',fieldOfView=1.8,position=(0.0,1.0,-0.5)),
      Inline(USE='FishIN')]),
    #  Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) 
    Script(DEF='BoidScript',directOutput=True,mustEvaluate=True,url=["FishSchoolCode/Demo.class","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/FishSchoolCode/Demo.class"],
      field=[
      field(accessType='inputOnly',name='GlobalTick',type='SFFloat'),
      field(accessType='initializeOnly',name='B9',type='SFNode',
        children=[
        Transform(USE='Fish9')]),
      field(accessType='initializeOnly',name='B8',type='SFNode',
        children=[
        Transform(USE='Fish8')]),
      field(accessType='initializeOnly',name='B7',type='SFNode',
        children=[
        Transform(USE='Fish7')]),
      field(accessType='initializeOnly',name='B6',type='SFNode',
        children=[
        Transform(USE='Fish6')]),
      field(accessType='initializeOnly',name='B5',type='SFNode',
        children=[
        Transform(USE='Fish5')]),
      field(accessType='initializeOnly',name='B4',type='SFNode',
        children=[
        Transform(USE='Fish4')]),
      field(accessType='initializeOnly',name='B3',type='SFNode',
        children=[
        Transform(USE='Fish3')]),
      field(accessType='initializeOnly',name='B2',type='SFNode',
        children=[
        Transform(USE='Fish2')]),
      field(accessType='initializeOnly',name='B1',type='SFNode',
        children=[
        Transform(USE='Fish1')]),
      field(accessType='initializeOnly',name='B0',type='SFNode',
        children=[
        Transform(USE='Fish0')])]),
    ROUTE(fromField='fraction_changed',fromNode='GlobalClock',toField='GlobalTick',toNode='BoidScript')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for FishSchool.py")
