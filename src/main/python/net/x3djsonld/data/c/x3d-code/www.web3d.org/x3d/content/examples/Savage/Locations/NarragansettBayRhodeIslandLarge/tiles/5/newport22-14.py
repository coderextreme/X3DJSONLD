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
        texture=ImageTexture(url=['../../images/5/newport22-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.48342589019228,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[39,40,38,38,36,34,33,33,30,30,35,38,37,33,28,22,20,22,20,21,18,17,40,42,41,41,39,34,33,32,31,32,36,38,37,34,29,23,18,16,16,14,14,15,47,48,46,42,41,36,33,32,31,34,34,36,37,32,25,20,17,17,17,17,13,13,54,55,51,48,40,36,34,33,33,33,35,34,32,26,23,19,16,16,17,17,20,20,61,61,57,53,43,39,32,33,31,31,32,27,27,29,23,20,19,18,19,20,22,23,66,65,61,54,48,41,35,31,30,29,26,29,28,26,24,22,22,21,20,23,24,24,71,66,65,56,49,43,38,36,32,29,26,27,28,28,25,23,24,23,22,23,25,25,68,65,60,55,51,44,39,36,34,33,29,30,28,27,27,26,24,24,22,21,23,24,66,65,61,56,48,42,38,34,31,29,32,33,29,28,28,26,24,23,22,21,22,22,67,61,56,51,44,39,35,31,30,32,32,32,31,28,28,25,22,22,20,20,22,22,57,55,53,48,45,38,35,30,30,31,31,32,32,28,26,26,23,22,19,19,19,19,55,54,52,48,46,40,36,33,29,27,30,31,28,27,27,25,24,22,21,18,17,17,55,53,52,48,45,44,38,35,32,30,34,29,29,28,29,26,27,25,22,19,16,16,53,54,51,49,44,39,36,34,35,35,35,34,34,32,30,28,26,26,24,20,17,16,53,50,49,48,45,40,39,35,33,34,35,36,34,34,35,31,31,29,23,21,10,10,48,49,48,46,45,42,34,37,38,35,35,33,37,35,35,35,32,26,22,16,16,16,48,48,47,45,45,41,33,39,38,38,35,34,33,36,36,36,31,25,22,14,20,20,47,47,48,47,42,41,39,41,40,38,39,37,34,34,35,34,28,23,22,20,22,23,48,48,47,46,42,43,42,40,40,40,39,35,34,33,32,31,27,23,21,22,24,25,50,49,50,48,47,44,43,41,40,38,37,39,35,31,26,25,24,25,22,25,25,25,54,55,54,51,45,41,41,40,36,37,37,38,36,32,30,26,26,25,27,26,25,25,62,58,52,49,45,40,37,37,37,38,38,35,33,31,30,28,27,25,26,23,23,24,56,53,50,49,45,40,38,37,40,39,37,33,34,35,31,29,27,27,27,25,25,25,55,51,50,50,46,41,38,36,40,39,35,34,35,35,31,29,26,26,27,25,25,26],
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
