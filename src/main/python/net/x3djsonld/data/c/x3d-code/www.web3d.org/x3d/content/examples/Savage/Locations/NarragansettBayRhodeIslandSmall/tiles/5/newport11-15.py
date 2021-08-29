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
        texture=ImageTexture(url=['../../images/5/newport11-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52686794665262,-71.31380072903733,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,2,7,12,14,12,11,11,13,14,17,0,0,0,0,0,0,0,0,0,0,0,0,0,1,7,15,17,15,13,12,12,12,13,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,11,14,13,12,12,12,12,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,7,9,10,10,13,13,13,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,7,9,9,14,16,15,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,7,8,8,12,13,14,16,0,0,0,0,0,0,0,0,0,0,0,0,0,5,7,6,9,9,9,10,9,9,11,0,0,0,0,0,0,0,0,0,0,0,0,3,10,8,7,9,8,10,11,7,8,9,0,0,0,0,0,0,0,0,0,0,0,0,2,7,6,6,8,8,10,13,11,11,13,0,0,0,0,0,0,0,0,0,0,0,0,1,4,5,7,8,10,11,14,16,17,18,0,0,0,0,0,0,0,0,0,0,0,0,4,6,9,10,11,12,14,15,18,21,23,0,0,0,0,0,0,0,0,0,0,0,2,6,7,9,11,13,14,15,18,20,24,24,0,0,0,0,0,0,0,0,0,0,0,3,7,8,8,10,13,15,17,19,21,23,23,0,0,0,0,2,2,0,0,1,1,0,3,6,7,7,8,11,15,19,21,22,23,25,0,0,0,0,0,0,0,0,0,2,3,6,8,8,9,11,14,17,21,23,24,26,27,0,0,0,0,0,0,0,0,0,0,4,8,11,11,12,14,16,19,23,25,27,28,28,0,0,0,0,0,0,0,0,0,1,5,9,12,15,17,19,20,21,25,28,28,29,30,0,0,0,0,0,0,0,0,0,3,8,11,14,16,20,23,24,24,25,27,28,28,31,0,0,0,0,0,0,0,0,0,5,11,15,15,17,21,23,25,27,26,28,29,30,31,1,0,0,0,0,0,0,0,1,7,12,15,16,17,21,24,28,31,31,31,32,32,31,1,1,1,1,2,0,0,0,4,10,13,14,15,16,20,25,32,38,39,36,33,31,31,0,0,1,1,1,1,1,1,2,10,13,15,17,19,23,26,32,36,40,40,37,35,32,0,0,0,0,0,0,1,1,4,11,15,16,19,22,25,28,32,35,39,39,37,36,33],
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
