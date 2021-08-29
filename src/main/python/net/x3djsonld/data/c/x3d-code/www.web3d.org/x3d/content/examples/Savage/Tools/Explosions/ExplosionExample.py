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
    meta(content='ExplosionExample.x3d',name='title'),
    meta(content='Animated explosion with sound implemented as a prototype instance',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='29 September 2007',name='created'),
    meta(content='15 April 2011',name='modified'),
    meta(content='ExplosionPrototypeExample.png',name='Image'),
    meta(content='ExplosionExampleVideo.mov',name='MovingImage'),
    meta(content='ExplosionPrototype.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/Explosions/ExplosionExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='Simple explosion animation of a sphere covered with a flame texture, plus a sound effect',name='Explosion',url=["ExplosionPrototype.x3d#Explosion","../../../Savage/Tools/Explosions/ExplosionPrototype.x3d#Explosion","https://savage.nps.edu/Savage/Tools/Explosions/ExplosionPrototype.x3d#Explosion","ExplosionPrototype.wrl#Explosion","../../../Savage/Tools/Explosions/ExplosionPrototype.wrl#Explosion","https://savage.nps.edu/Savage/Tools/Explosions/ExplosionPrototype.wrl#Explosion"],
      field=[
      field(accessType='inputOnly',appinfo='time event to trigger explosion',name='detonateTime',type='SFTime'),
      field(accessType='inputOutput',appinfo='size of explosion sphere',name='size',type='SFVec3f')]),
    ProtoInstance(DEF='ExplosionInstance',name='Explosion',
      fieldValue=[
      fieldValue(name='size',value=(3,3,3))]),
    Group(
      children=[
      TouchSensor(DEF='TextTouch',description='Click text to trigger explosion'),
      Shape(
        geometry=Text(string=["Click text to trigger","explosion prototype"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
        appearance=Appearance(
          material=Material(diffuseColor=(0.2,0.2,0.8)))),
      ROUTE(fromField='touchTime',fromNode='TextTouch',toField='detonateTime',toNode='ExplosionInstance')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ExplosionExample.py")
