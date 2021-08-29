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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/5/newport25-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.63985995553778,-71.34608416014737,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[14,15,12,7,3,0,0,0,0,0,0,0,0,0,0,0,0,1,4,3,4,7,7,18,16,12,8,6,2,0,0,0,0,0,0,0,0,3,10,3,6,10,8,7,7,7,14,10,7,6,7,6,2,0,1,2,6,10,13,11,10,10,5,6,8,6,5,5,6,9,6,5,6,7,7,6,5,6,6,6,9,11,13,13,12,11,7,7,6,5,6,8,7,6,7,9,9,8,7,9,11,9,9,10,13,17,17,16,14,9,6,5,5,7,6,8,8,10,12,11,10,9,9,10,9,11,12,13,14,14,14,14,11,7,6,7,6,5,10,9,11,11,12,12,11,10,10,12,12,10,8,8,10,10,12,13,11,8,8,9,8,12,12,13,13,13,12,11,10,10,10,9,6,4,6,8,9,13,15,13,11,9,8,9,13,14,14,14,13,12,10,9,9,8,7,7,8,10,10,10,13,14,14,14,10,9,8,13,15,15,14,14,13,12,11,10,9,10,11,10,9,9,9,10,10,11,12,11,10,8,15,16,15,15,15,15,15,13,11,10,10,10,10,8,8,9,9,7,7,8,8,8,7,17,17,17,16,15,16,15,13,11,11,10,8,9,9,8,7,7,8,7,7,6,5,6,19,19,18,17,16,15,15,13,12,12,10,7,6,8,7,5,6,8,9,8,6,5,6,20,20,19,18,18,17,15,12,11,11,9,6,6,7,7,5,4,6,8,9,6,6,6,20,20,20,19,20,17,15,14,11,10,9,9,7,5,6,5,5,6,7,7,5,5,6,22,22,21,20,19,16,15,13,11,10,10,10,9,7,5,5,6,4,6,6,6,7,7,23,25,23,20,20,18,17,16,14,12,13,13,12,10,8,6,5,5,6,6,6,3,2,25,26,24,22,22,21,19,18,17,14,14,15,12,10,7,5,2,3,5,4,2,2,2,26,26,25,24,23,23,22,21,21,17,14,12,8,8,6,5,1,0,2,2,2,2,2,25,25,26,24,22,22,23,22,20,16,12,9,9,10,8,4,1,1,2,2,2,1,0,25,24,25,24,22,22,21,19,16,14,11,10,10,9,9,6,3,3,2,1,1,0,0,25,23,22,23,21,21,19,18,16,13,11,11,11,8,8,9,6,5,3,1,2,0,0,24,22,22,23,21,21,19,18,16,13,11,11,12,8,7,8,6,5,2,1,4,0,0],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
