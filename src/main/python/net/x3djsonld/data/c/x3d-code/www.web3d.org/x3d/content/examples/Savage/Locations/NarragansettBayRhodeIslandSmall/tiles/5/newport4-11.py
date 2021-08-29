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
        texture=ImageTexture(url=['../../images/5/newport4-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47037194221004,-71.34608416014737,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[11,12,14,16,17,15,14,12,12,11,11,11,11,12,12,12,11,10,9,9,8,9,8,10,11,13,16,16,15,14,13,13,13,13,13,13,14,14,13,12,11,10,10,10,11,13,9,11,13,16,15,14,14,13,13,14,14,15,15,15,15,15,13,11,10,10,10,12,14,8,10,13,15,14,14,14,14,15,15,16,16,16,17,17,17,15,12,11,10,10,11,13,6,9,12,14,14,14,14,14,16,16,17,17,18,19,19,18,17,14,11,9,8,9,10,3,7,10,12,13,13,13,14,15,16,17,17,18,19,20,20,18,15,11,9,8,8,7,0,3,8,10,11,12,13,14,15,16,17,18,18,19,20,21,18,16,13,11,9,8,6,0,0,3,7,9,11,12,13,14,16,17,18,18,18,20,21,20,18,16,14,11,8,6,0,0,0,3,7,8,10,11,13,14,16,17,18,18,19,21,21,20,18,16,13,8,5,0,0,0,1,4,5,7,9,11,13,15,17,17,18,19,21,21,20,20,18,15,9,6,0,0,0,0,0,2,3,6,9,11,14,16,17,18,19,20,20,20,20,19,16,11,7,0,0,0,0,0,0,0,3,7,9,12,14,15,17,18,19,19,19,19,18,16,11,8,0,0,0,0,0,0,0,0,3,5,8,11,13,15,17,18,18,17,18,17,15,11,9,0,0,0,0,0,0,0,0,0,0,3,6,9,13,15,16,15,15,15,15,14,12,10,0,0,0,0,0,0,0,0,0,0,0,2,6,10,13,13,13,13,13,13,12,11,11,0,0,0,0,0,0,0,0,0,0,0,0,2,6,9,10,11,11,11,11,11,11,11,0,0,0,0,0,0,0,0,0,0,0,0,0,1,4,8,9,10,10,10,10,10,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,7,8,9,10,10,10,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,4,6,8,9,9,9,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,5,8,9,8,8,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,8,9,8,8,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,7,8,8,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,8,9,10],
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
