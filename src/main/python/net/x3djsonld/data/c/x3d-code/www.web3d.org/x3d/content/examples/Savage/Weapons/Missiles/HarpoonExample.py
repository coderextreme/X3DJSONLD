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
    meta(content='HarpoonExample.x3d',name='title'),
    meta(content='RGM-84D, Harpoon Anti-Ship Cruise missile example use of prototype with built-in animation.',name='description'),
    meta(content='James Harney',name='creator'),
    meta(content='13 October 2002',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='11 April 2009',name='modified'),
    meta(content='needs to be realigned with X-axis nose and Y-axis up.',name='warning'),
    meta(content='http://www.fas.org/man/dod-101/sys/smart/agm-84.htm',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/smart/agm-84.gif',name='reference'),
    meta(content='AGM-84 Harpoon-SLAM - Smart Weapons.htm',name='reference'),
    meta(content='agm-84.gif',name='reference'),
    meta(content='https://savage.nps.edu/Savage/CruiserUnitedStates/Cruiser.x3d',name='reference'),
    meta(content='http://www.specialoperations.com/multimedia/sounds.html',name='reference'),
    meta(content='See url "soundpermissions.html" for copyright info and use on missile1.au and exp03.au that are converted to missile1.wav and exp03.wav for use in this file/model',name='reference'),
    meta(content='soundpermissions.html',name='accessRights'),
    meta(content='https://savage.nps.edu/Savage/Weapons/Missiles/HarpoonExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(name='RGM-84D',url=["HarpoonPrototype.x3d#RGM-84D","https://savage.nps.edu/Savage/Weapons/Missiles/HarpoonPrototype.x3d#RGM-84D","HarpoonPrototype.wrl#RGM-84D","https://savage.nps.edu/Savage/Weapons/Missiles/HarpoonPrototype.wrl#RGM-84D"],
      field=[
      field(accessType='inputOnly',name='STARTLAUNCH',type='SFBool'),
      field(accessType='inputOnly',name='THETIME',type='SFTime')]),
    Background(skyColor=[(0.604,0.753,0.804)]),
    ProtoInstance(name='RGM-84D')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HarpoonExample.py")
