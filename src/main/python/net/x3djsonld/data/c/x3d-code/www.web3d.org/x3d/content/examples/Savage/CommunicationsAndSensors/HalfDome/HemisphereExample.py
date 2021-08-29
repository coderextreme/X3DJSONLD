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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='HemisphereExample.x3d',name='title'),
    meta(content='Don Brutzman, David W. Laflam',name='creator'),
    meta(content='12 May 2009',name='created'),
    meta(content='12 May 2009',name='modified'),
    meta(content='Geometry node for a hemisphere (half dome)',name='description'),
    meta(content='Is this the right directory location for this model?',name='TODO'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/HalfDome/HemisphereExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='Geometry node for hemisphere with unit radius default orientation has open end on X-Z plane with curvature going up the +Y axis.',name='Hemisphere',url=["HemispherePrototype.x3d#Hemisphere","https://savage.nps.edu/Savage/CommunicationsAndSensors/HalfDome/HemispherePrototype.x3d#Hemisphere","HemispherePrototype.wrl#Hemisphere","https://savage.nps.edu/Savage/CommunicationsAndSensors/HalfDome/HemispherePrototype.wrl#Hemisphere"]),
    #  now test and display the prototype definition 
    Group(
      children=[
      Shape(
        geometry=ProtoInstance(name='Hemisphere'),
        appearance=Appearance(
          material=Material(ambientIntensity=0.372549,diffuseColor=(0,0.51,0.12),emissiveColor=(0,0.8,0),shininess=0.72,transparency=0.85)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HemisphereExample.py")
