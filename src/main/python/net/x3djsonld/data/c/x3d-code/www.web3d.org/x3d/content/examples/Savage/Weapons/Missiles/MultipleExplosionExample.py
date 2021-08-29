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
    meta(content='MultipleExplosionExample.x3d',name='title'),
    meta(content='Simple prototype for a multiple explosion resulting from a tomahawk strike.',name='description'),
    meta(content='James Harney',name='creator'),
    meta(content='13 October 2002',name='created'),
    meta(content='13 October 2002',name='modified'),
    meta(content='http://www.planetnine.com',name='reference'),
    meta(content='http://www.specialoperations.com/multimedia/sounds.html',name='reference'),
    meta(content='See url "soundpermissions.html" for copyright info and use on missile1.au and exp03.au that are converted to missile1.wav and exp03.wav for use in this file/model',name='reference'),
    meta(content='soundpermissions.html',name='accessRights'),
    meta(content='explosion.png',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Weapons/Missiles/MultipleExplosionExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(name='TLAMEXPLOSION',url=["MultipleExplosionPrototype.wrl#TLAMEXPLOSION","../../Weapons/Missiles/MultipleExplosionPrototype.wrl#TLAMEXPLOSION","https://savage.nps.edu/Savage/Weapons/Missiles/MultipleExplosionPrototype.wrl#TLAMEXPLOSION","MultipleExplosionPrototype.x3d#TLAMEXPLOSION","../../Weapons/Missiles/MultipleExplosionPrototype.x3d#TLAMEXPLOSION","https://savage.nps.edu/Savage/Weapons/Missiles/MultipleExplosionPrototype.x3d#TLAMEXPLOSION"],
      field=[
      field(accessType='inputOnly',name='STARTEXPLOSION',type='SFBool'),
      field(accessType='inputOnly',name='THETIME',type='SFTime')]),
    Background(skyColor=[(0.604,0.753,0.804)]),
    ProtoInstance(name='TLAMEXPLOSION')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MultipleExplosionExample.py")
