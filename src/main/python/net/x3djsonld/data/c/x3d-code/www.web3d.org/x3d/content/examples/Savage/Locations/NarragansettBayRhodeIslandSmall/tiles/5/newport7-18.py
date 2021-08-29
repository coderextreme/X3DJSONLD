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
        texture=ImageTexture(url=['../../images/5/newport7-18.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.49458451554258,-71.28958815570479,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,4,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,6,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,7,9,9,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,7,9,10,10,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,6,9,10,11,11,2,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,4,7,10,12,13,14,3,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,6,9,11,13,14,16,5,2,1,1,1,1,1,1,1,1,1,0,0,0,0,0,3,8,10,12,14,16,18,6,2,2,2,1,1,1,1,1,1,1,0,0,0,0,1,8,10,11,13,15,17,18,7,3,2,2,2,1,1,1,1,1,1,1,0,0,1,5,9,11,12,14,16,18,20,8,3,2,2,2,2,2,1,1,1,1,1,1,1,3,7,9,11,13,14,16,19,21,9,6,4,2,2,2,2,1,1,1,1,1,1,1,5,8,9,11,13,14,17,19,21,9,7,5,3,2,2,2,2,2,2,2,2,1,1,5,8,10,11,13,15,17,19,21,9,8,6,4,2,2,2,2,2,2,2,2,1,2,6,9,11,11,13,15,18,20,22,9,8,6,4,2,2,2,2,2,2,2,2,1,2,7,10,11,11,13,15,18,21,23],
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
