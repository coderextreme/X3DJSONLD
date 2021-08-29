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
    meta(content='FollowerExternalPrototypeDeclarations.x3d',name='title'),
    meta(content='X3D Follower example',name='description'),
    meta(content='Herbert Stocker',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='18 April 2006',name='created'),
    meta(content='10 April 2012',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='FollowerPrototypeDeclarations.x3d',name='reference'),
    meta(content='originals/Chasers.wrl',name='reference'),
    meta(content='originals/Dampers.wrl',name='reference'),
    meta(content='Stocker_06_Followers.pdf',name='reference'),
    meta(content='http://www.hersto.com/Publications/Followers',name='reference'),
    meta(content='X3D version 3.2 or greater',name='requires'),
    meta(content='X3D Follower Chaser Damper',name='subject'),
    meta(content='under development',name='warning'),
    meta(content='Rename and test these prototypes to match final names in X3D Specification Followers Component',name='TODO'),
    meta(content='Ensure full coverage of follower nodes in order to provide backwards compatibility with X3D v3.0 and v3.1.',name='TODO'),
    meta(content='https://www.web3d.org/x3d/specifications/ISO-IEC-19775-1.2-X3D-AbstractSpecification/Part01/components/followers.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Followers/FollowerExternalPrototypeDeclarations.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(info=["The ExternProto nodes found in this file implement principles described in the paper","Linear Filters - Animating Objects in a Flexible and Pleasing Way","They have been proposed and added to the X3D standard in 2006.","Webpage: http://www.hersto.net/Followers","","Please use the code in this file in any content or application you like","or modify it in any way.","","The code here works, however things like detecting when a transition has ended","and when the node can stop calculating and updating the output or secondary fields","like set_value or initial_destination are not yet implemented.","Nevertheless, set_destination and value_changed do work."],title='Follower (Chaser and Damper) nodes'),
    #  ================================================ 
    #  Do not use these! The following ExternProtoDeclares were produced when converting the original examples, and are included for completeness only. 
    ExternProtoDeclare(name='OrientationChaser',url=["urn:inet:hersto.net:node:OrientationChaser","Chasers.x3d#OrientationChaser","https://www.web3d.org/x3d/content/examples/Basic/Followers/Chasers.x3d#OrientationChaser","Chasers.wrl#OrientationChaser","https://www.web3d.org/x3d/content/examples/Basic/Followers/Chasers.wrl#OrientationChaser","http://www.hersto.net/Followers/Chasers.wrl#OrientationChaser"],
      field=[
      field(accessType='outputOnly',name='value_changed',type='SFRotation'),
      field(accessType='inputOnly',name='set_value',type='SFRotation'),
      field(accessType='outputOnly',name='isActive',type='SFBool'),
      field(accessType='inputOnly',name='set_destination',type='SFRotation'),
      field(accessType='initializeOnly',name='duration',type='SFTime'),
      field(accessType='initializeOnly',name='initial_destination',type='SFRotation'),
      field(accessType='initializeOnly',name='initial_value',type='SFRotation')]),
    ExternProtoDeclare(name='OrientationDamper',url=["urn:inet:hersto.net:node:OrientationDamper","Dampers.wrl#OrientationDamper","http://www.hersto.net/Followers/Dampers.wrl#OrientationDamper"],
      field=[
      field(accessType='outputOnly',name='isLoaded',type='SFBool'),
      field(accessType='outputOnly',name='value_changed',type='SFRotation'),
      field(accessType='inputOnly',name='set_destination',type='SFRotation'),
      field(accessType='initializeOnly',name='initial_destination',type='SFRotation'),
      field(accessType='initializeOnly',name='order',type='SFInt32'),
      field(accessType='inputOutput',name='tau',type='SFFloat'),
      field(accessType='inputOnly',name='set_value',type='SFRotation'),
      field(accessType='initializeOnly',name='initial_value',type='SFRotation'),
      field(accessType='outputOnly',name='isActive',type='SFBool'),
      field(accessType='initializeOnly',name='eps',type='SFFloat')]),
    ExternProtoDeclare(name='PlacementChaser',url=["Chasers.x3d#PlacementChaser","https://www.web3d.org/x3d/content/examples/Basic/Followers/Chasers.x3d#PlacementChaser","Chasers.wrl#PlacementChaser","https://www.web3d.org/x3d/content/examples/Basic/Followers/Chasers.wrl#PlacementChaser"],
      field=[
      field(accessType='outputOnly',name='isLoaded',type='SFBool'),
      field(accessType='inputOnly',name='set_valuePos',type='SFVec3f'),
      field(accessType='inputOnly',name='set_valueOri',type='SFRotation'),
      field(accessType='inputOnly',name='set_destinationPos',type='SFVec3f'),
      field(accessType='initializeOnly',name='duration',type='SFTime'),
      field(accessType='inputOnly',name='set_destinationOri',type='SFRotation'),
      field(accessType='initializeOnly',name='initial_valuePos',type='SFVec3f'),
      field(accessType='initializeOnly',name='initial_destinationPos',type='SFVec3f'),
      field(accessType='outputOnly',name='valuePos_changed',type='SFVec3f'),
      field(accessType='initializeOnly',name='initial_valueOri',type='SFRotation'),
      field(accessType='initializeOnly',name='initial_destinationOri',type='SFRotation'),
      field(accessType='outputOnly',name='valueOri_changed',type='SFRotation'),
      field(accessType='outputOnly',name='isActive',type='SFBool')]),
    ExternProtoDeclare(name='Position2fDamper',url=["urn:inet:hersto.net:node:Position2fDamper","Dampers.wrl#Position2fDamper","http://www.hersto.net/Followers/Dampers.wrl#Position2fDamper"],
      field=[
      field(accessType='outputOnly',name='isLoaded',type='SFBool'),
      field(accessType='outputOnly',name='value_changed',type='SFVec2f'),
      field(accessType='inputOnly',name='set_destination',type='SFVec2f'),
      field(accessType='initializeOnly',name='initial_destination',type='SFVec2f'),
      field(accessType='initializeOnly',name='order',type='SFInt32'),
      field(accessType='inputOutput',name='tau',type='SFFloat'),
      field(accessType='inputOnly',name='set_value',type='SFVec2f'),
      field(accessType='initializeOnly',name='initial_value',type='SFVec2f'),
      field(accessType='outputOnly',name='isActive',type='SFBool'),
      field(accessType='initializeOnly',name='eps',type='SFFloat')]),
    ExternProtoDeclare(name='Position2fChaser',url=["urn:inet:hersto.net:node:Position2fChaser","Chasers.wrl#Position2fChaser","http://www.hersto.net/Followers/Chasers.wrl#Position2fChaser"],
      field=[
      field(accessType='outputOnly',name='value_changed',type='SFVec2f'),
      field(accessType='inputOnly',name='set_value',type='SFVec2f'),
      field(accessType='outputOnly',name='isActive',type='SFBool'),
      field(accessType='inputOnly',name='set_destination',type='SFVec2f'),
      field(accessType='initializeOnly',name='duration',type='SFTime'),
      field(accessType='initializeOnly',name='initial_destination',type='SFVec2f'),
      field(accessType='initializeOnly',name='initial_value',type='SFVec2f')]),
    ExternProtoDeclare(name='PositionChaser',url=["urn:inet:hersto.net:node:PositionChaser","Chasers.wrl#PositionChaser","http://www.hersto.net/Followers/Chasers.wrl#PositionChaser"],
      field=[
      field(accessType='outputOnly',name='value_changed',type='SFVec3f'),
      field(accessType='inputOnly',name='set_value',type='SFVec3f'),
      field(accessType='outputOnly',name='isActive',type='SFBool'),
      field(accessType='inputOnly',name='set_destination',type='SFVec3f'),
      field(accessType='initializeOnly',name='duration',type='SFTime'),
      field(accessType='initializeOnly',name='initial_destination',type='SFVec3f'),
      field(accessType='initializeOnly',name='initial_value',type='SFVec3f')]),
    ExternProtoDeclare(name='PositionDamper',url=["urn:inet:hersto.net:node:PositionDamper","Dampers.wrl#PositionDamper","http://www.hersto.net/Followers/Dampers.wrl#PositionDamper"],
      field=[
      field(accessType='outputOnly',name='isLoaded',type='SFBool'),
      field(accessType='outputOnly',name='value_changed',type='SFVec3f'),
      field(accessType='inputOnly',name='set_destination',type='SFVec3f'),
      field(accessType='initializeOnly',name='initial_destination',type='SFVec3f'),
      field(accessType='initializeOnly',name='order',type='SFInt32'),
      field(accessType='inputOutput',name='tau',type='SFFloat'),
      field(accessType='inputOnly',name='set_value',type='SFVec3f'),
      field(accessType='initializeOnly',name='initial_value',type='SFVec3f'),
      field(accessType='outputOnly',name='isActive',type='SFBool'),
      field(accessType='initializeOnly',name='eps',type='SFFloat')]),
    ExternProtoDeclare(name='ScalarDamper',url=["Dampers.x3d#ScalarDamper","https://www.web3d.org/x3d/content/examples/Basic/Followers/Dampers.x3d#ScalarDamper","Dampers.wrl#ScalarDamper","https://www.web3d.org/x3d/content/examples/Basic/Followers/Dampers.wrl#ScalarDamper"],
      field=[
      field(accessType='outputOnly',name='isLoaded',type='SFBool'),
      field(accessType='outputOnly',name='value_changed',type='SFFloat'),
      field(accessType='inputOnly',name='set_destination',type='SFFloat'),
      field(accessType='initializeOnly',name='initial_destination',type='SFFloat'),
      field(accessType='initializeOnly',name='order',type='SFInt32'),
      field(accessType='inputOutput',name='tau',type='SFFloat'),
      field(accessType='inputOnly',name='set_value',type='SFFloat'),
      field(accessType='outputOnly',name='transparency_changed',type='SFFloat'),
      field(accessType='initializeOnly',name='initial_value',type='SFFloat'),
      field(accessType='outputOnly',name='isActive',type='SFBool'),
      field(accessType='initializeOnly',name='eps',type='SFFloat')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for FollowerExternalPrototypeDeclarations.py")
