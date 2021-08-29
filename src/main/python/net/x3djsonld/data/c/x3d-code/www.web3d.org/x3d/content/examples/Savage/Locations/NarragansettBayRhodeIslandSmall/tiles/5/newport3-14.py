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
        texture=ImageTexture(url=['../../images/5/newport3-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.46230108443253,-71.32187158681484,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[6,4,0,0,0,0,0,0,0,0,0,0,3,4,6,8,9,11,11,10,10,9,9,9,7,2,0,0,0,0,0,0,0,0,0,0,3,5,7,9,10,11,10,10,9,8,12,10,6,1,0,0,0,0,0,0,0,0,0,1,4,6,8,10,11,10,10,9,8,14,12,9,3,0,0,0,0,0,0,0,0,0,1,3,6,9,11,11,10,10,9,8,15,13,12,10,5,0,0,0,0,0,0,0,0,0,2,6,10,11,10,10,10,9,8,14,14,15,16,13,3,0,0,0,0,0,0,0,0,0,5,11,12,10,10,10,9,9,13,14,16,17,15,4,0,0,0,0,0,0,0,0,1,7,11,12,11,10,10,10,9,11,12,15,17,16,10,6,1,0,0,0,0,0,0,2,7,11,12,11,11,10,10,10,9,10,14,16,16,13,9,1,0,0,0,0,0,0,1,7,10,11,11,11,11,10,10,8,10,14,15,15,14,10,3,0,0,0,0,0,0,0,5,9,10,10,11,11,11,10,7,11,14,15,15,14,13,7,1,0,0,0,0,0,0,3,7,8,9,10,11,11,11,8,11,13,15,15,15,15,10,1,0,0,0,0,0,0,1,5,8,9,10,11,11,11,9,12,13,15,15,15,17,16,3,0,0,0,0,0,0,3,7,9,9,10,11,11,12,12,12,11,15,17,17,17,16,8,1,0,0,0,0,3,7,10,11,10,10,11,12,13,15,13,11,15,17,17,16,15,11,6,4,3,2,3,5,9,13,12,10,10,11,12,13,17,14,11,16,17,17,16,15,13,10,8,6,5,5,6,10,14,13,12,11,11,13,13,16,14,13,15,16,15,15,15,16,15,13,9,6,6,7,10,14,15,13,12,13,13,13,16,15,14,15,15,15,15,16,17,18,16,12,8,8,8,10,14,14,14,13,13,13,13,17,16,16,16,15,15,15,16,17,18,16,13,10,10,10,11,13,13,13,12,12,12,12,18,17,17,16,17,17,17,17,16,16,15,13,12,11,11,12,12,12,12,11,10,10,10,18,18,17,17,17,17,17,17,16,15,14,12,12,12,11,11,11,12,11,10,9,9,9,18,18,18,19,19,17,17,17,15,13,12,11,12,11,10,9,10,10,10,9,8,8,8,18,18,19,19,20,18,17,16,14,13,11,11,12,11,9,9,9,10,9,8,7,7,7],
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
