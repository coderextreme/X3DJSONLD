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
    meta(content='DeadReckoningComparisons.x3d',name='title'),
    meta(content='Compare different dead-reckoning algorithms to see relative effects of velocity and acceleration on animation smoothness.',name='description'),
    meta(content='Brian Hittner',name='creator'),
    meta(content='Xeena VRML importer, X3D-Edit 3.1, https://www.web3d.org/x3d/content/README.X3D-Edit.html',name='translator'),
    meta(content='11 June 2003',name='created'),
    meta(content='12 June 2003',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='1.0',name='version'),
    meta(content='DeadReckoningComparisons/Project4.java',name='reference'),
    meta(content='vrml97.jar',name='reference'),
    meta(content='DeadReckoningComparisons/README.TXT',name='reference'),
    meta(content='CLASSPATH needs to include location of DeadReckoningComparisons/Project4.jar',name='warning'),
    meta(content='dead reckoning',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/DeadReckoningComparisons.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='DeadReckoningComparisons.x3d'),
    Viewpoint(description='Dead Reckoning Comparisons',position=(0.0,0.0,15.0)),
    Group(
      children=[
      Transform(DEF='SpherePosition',
        children=[
        Group(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1.0,0.1,0.1))),
            geometry=Sphere(),)]),
        TimeSensor(DEF='Clock',cycleInterval=5.0,loop=True),
        #  Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) 
        Script(DEF='Movement',url=["DeadReckoningComparisons/Project4.class","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/DeadReckoningComparisons/Project4.class"],
          field=[
          field(accessType='inputOnly',name='set_time',type='SFFloat'),
          field(accessType='outputOnly',name='position_changed',type='SFVec3f'),
          field(accessType='outputOnly',name='text_changed',type='MFString')])]),
      Transform(translation=(-4.0,0.0,0.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Text(DEF='myMessage',string=["Test String"]))])]),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_time',toNode='Movement'),
    ROUTE(fromField='position_changed',fromNode='Movement',toField='translation',toNode='SpherePosition'),
    ROUTE(fromField='text_changed',fromNode='Movement',toField='string',toNode='myMessage')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for DeadReckoningComparisons.py")
