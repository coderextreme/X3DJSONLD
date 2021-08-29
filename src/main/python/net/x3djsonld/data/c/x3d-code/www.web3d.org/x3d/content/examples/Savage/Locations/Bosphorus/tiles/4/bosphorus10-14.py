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
        texture=ImageTexture(url=['../../images/4/bosphorus10-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.171586403296146,29.47604227744523,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[112,103,111,105,117,66,70,83,93,101,42,63,80,93,83,91,98,44,77,102,106,103,108,101,66,83,111,46,49,46,103,104,70,40,34,90,39,44,56,41,90,99,78,77,79,81,72,80,82,61,28,47,92,90,72,33,24,59,24,38,44,69,81,94,97,95,82,99,58,52,36,31,29,39,56,88,53,44,44,23,28,89,93,98,99,67,72,82,90,109,100,95,80,27,40,82,91,94,80,87,92,42,26,51,83,97,75,81,51,66,100,98,99,99,94,47,17,46,87,94,86,97,66,47,10,40,40,91,42,83,23,36,70,79,59,96,78,46,28,68,76,73,66,66,90,59,14,27,31,53,19,12,2,2,34,78,51,78,45,63,13,10,24,60,50,37,58,60,33,2,0,2,6,2,0,0,9,48,22,55,30,46,36,13,5,13,27,15,19,4,0,1,0,0,1,0,-1,-1,10,5,12,29,25,28,18,10,1,0,2,7,2,0,0,0,0,0,0,0,0,0,12,4,8,18,9,3,1,4,0,0,1,1,0,0,1,0,1,0,0,1,1,1,11,4,1,2,6,2,0,1,1,0,1,0,2,0,0,1,0,0,1,1,0,0,2,0,0,2,1,-1,0,0,-1,0,0,1,0,0,2,0,0,0,0,0,2,1,5,-1,-1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,2,0,1,0,-2,0,0,0,0,1,1,0,2,1,0,1,-1,0,0,0,1,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,1,1,0,0,0,1,0,0,0,0,-1,-2,0,0,0,2,0,1,0,0,0,-1,0,1,2,0,1,2,0,1,1,0,2,0,0,0,0,0,1,0,0,0,1,0,2,1,0,0,1,0,2,0,1,0,1,0,0,0,0,0,0,2,1,0,0,2,0,1,2,0,0,1,0,1,1,0,2,0,1,0,1,1,2,1,1,0,2,2,0,1,0,3,0,1,0,2,1,0,2,0,0,1,0,0,3,0,0,2,0,1,4,1,1,2,1,0,0,1,2,1,1,2,1,0,2,0,0,3,1,0,0,2,2,0,1,0,1,1,2,0,0,1,0,0,0,0,1,2,0,0,0,0,1,0,0,1,0,2,0,1,2,1,0,2,0,1,1,0,2,2,0,0,0,1,1,0,0,1,0,2,0,1,1,1,0],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])))])
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
