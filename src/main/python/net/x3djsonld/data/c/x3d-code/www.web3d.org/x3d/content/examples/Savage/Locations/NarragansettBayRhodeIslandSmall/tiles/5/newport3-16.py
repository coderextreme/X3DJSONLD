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
        texture=ImageTexture(url=['../../images/5/newport3-16.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.46230108443253,-71.30572987125981,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[9,8,8,8,8,8,9,9,9,10,10,9,3,0,0,0,0,0,0,0,0,0,0,9,9,9,9,9,10,10,10,10,10,11,9,5,0,0,0,0,0,0,0,0,0,0,10,9,9,9,10,10,10,10,10,11,10,8,4,0,0,0,0,0,0,0,0,0,0,10,10,10,10,11,11,11,11,11,11,9,2,0,0,0,0,0,0,0,0,0,0,0,10,10,11,11,11,11,11,11,11,11,8,1,0,0,0,0,0,0,0,0,0,0,0,10,10,11,11,11,11,11,11,11,11,9,1,0,0,0,0,0,0,0,0,0,0,0,10,10,12,13,13,13,13,13,13,12,11,4,0,0,0,0,0,0,0,0,0,0,0,10,11,12,13,14,14,14,14,14,13,12,10,2,0,0,0,0,0,0,0,0,0,0,11,11,13,14,14,14,14,15,15,14,13,12,8,0,0,0,0,0,0,0,0,0,0,11,11,13,14,15,15,15,16,16,15,13,12,9,1,0,0,0,0,0,0,0,0,0,11,12,13,14,15,15,15,17,17,15,13,11,9,5,0,0,0,0,0,0,0,0,0,11,12,13,13,14,15,16,17,17,15,13,12,10,7,0,0,0,0,0,0,0,0,0,10,11,12,13,13,15,16,17,17,15,13,12,10,8,5,0,0,0,0,0,0,0,0,10,11,12,12,13,14,16,17,16,15,13,12,12,10,7,0,0,0,0,0,0,0,0,10,11,12,12,12,14,15,16,15,14,13,12,11,10,9,4,0,0,0,0,0,0,0,10,11,11,11,12,13,14,14,14,13,12,11,10,10,9,7,4,0,0,0,0,0,0,10,12,11,11,12,12,12,12,12,12,12,11,10,9,8,8,5,2,0,0,0,0,0,11,13,13,13,13,13,13,13,12,13,12,11,10,9,8,8,7,6,4,3,1,0,0,12,14,14,14,14,14,14,14,13,13,13,11,10,9,8,8,7,5,5,5,5,5,5,13,14,14,14,14,14,14,15,14,14,13,12,10,9,9,8,6,5,5,5,6,7,9,14,14,14,14,14,14,14,15,15,14,14,13,11,10,10,8,7,6,5,6,7,9,10,13,13,13,13,13,13,14,15,15,14,14,13,11,11,10,9,8,7,6,7,9,10,10,12,12,12,12,12,13,13,14,14,14,14,13,12,11,11,9,8,7,7,8,10,10,10],
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
