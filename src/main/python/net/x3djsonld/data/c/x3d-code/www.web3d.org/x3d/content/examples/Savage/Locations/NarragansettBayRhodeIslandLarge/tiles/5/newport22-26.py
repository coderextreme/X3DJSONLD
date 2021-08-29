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
        texture=ImageTexture(url=['../../images/5/newport22-26.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.21960164167137,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[4,2,2,1,8,7,6,1,1,1,1,1,1,4,15,25,33,38,42,56,68,67,8,6,1,1,9,9,4,1,1,1,1,1,1,5,11,26,34,39,41,42,51,54,7,8,7,8,8,1,1,1,1,1,1,1,1,6,10,24,33,38,42,47,46,46,5,4,6,7,7,5,1,1,1,1,1,1,1,2,8,23,30,35,40,44,48,48,2,1,4,6,2,4,1,1,1,1,1,1,1,1,11,19,28,32,37,44,47,48,1,2,4,12,1,1,1,1,1,1,1,1,1,1,12,14,25,29,30,42,44,45,1,1,6,12,1,1,1,1,1,1,1,1,1,1,6,13,22,27,26,40,44,45,1,1,3,4,1,1,1,1,1,1,1,1,1,1,1,7,13,26,26,39,45,47,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,3,12,22,29,44,47,49,1,1,4,1,1,1,1,1,1,1,1,1,1,1,1,1,11,20,31,45,50,51,1,3,3,1,1,1,1,1,1,1,1,1,1,1,1,1,8,19,37,48,56,56,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,5,17,40,52,61,62,1,1,2,3,1,1,1,1,1,1,1,1,1,1,1,1,2,16,36,53,64,65,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,16,31,47,59,62,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,11,25,40,52,56,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,19,31,43,46,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,16,24,35,38,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,6,18,28,31,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,9,19,22,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,10,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1],
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
