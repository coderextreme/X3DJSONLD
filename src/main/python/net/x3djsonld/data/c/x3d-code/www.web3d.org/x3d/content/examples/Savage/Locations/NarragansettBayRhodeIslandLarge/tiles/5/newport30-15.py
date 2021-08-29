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
        texture=ImageTexture(url=['../../images/5/newport30-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.46144053614887,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[18,34,41,53,57,55,39,36,36,36,37,40,43,44,41,36,29,28,27,26,25,25,29,37,47,54,54,48,40,35,36,35,36,41,43,42,38,33,28,27,26,24,23,23,30,39,51,53,52,45,40,35,34,34,35,40,41,39,35,30,26,25,24,22,22,22,39,46,52,53,51,46,42,36,34,33,33,37,36,35,32,28,27,27,23,21,21,21,44,51,54,55,53,48,41,36,34,33,33,33,33,31,29,25,25,26,22,21,21,21,54,54,57,56,51,45,41,37,36,35,35,36,34,31,27,24,24,24,22,21,22,22,56,56,56,54,51,47,41,38,37,36,36,36,33,29,26,23,23,24,25,24,23,22,58,60,58,56,52,46,40,39,36,36,37,36,33,29,28,25,27,27,28,27,26,26,58,58,58,56,52,47,43,43,41,38,36,36,31,28,27,27,28,30,31,29,29,29,55,56,58,56,52,46,45,47,42,35,34,32,30,28,28,29,30,33,33,31,31,32,51,55,56,55,53,51,51,52,44,36,32,30,30,30,30,33,33,34,33,33,34,35,51,54,55,55,54,53,55,54,47,37,32,33,33,33,35,35,35,34,35,36,38,38,52,54,54,54,54,54,57,57,51,39,34,33,35,37,38,36,35,35,37,41,45,46,54,54,54,57,58,59,59,58,54,46,40,36,39,40,38,37,36,36,38,43,46,47,59,60,60,63,63,63,60,58,56,49,44,36,40,39,38,37,36,37,39,42,45,47,62,65,66,67,67,66,63,59,56,51,45,37,35,36,36,37,38,39,40,42,45,47,63,67,69,68,68,68,66,64,60,59,54,40,34,34,36,39,42,41,41,42,46,48,65,69,69,69,70,69,69,66,63,61,56,47,39,33,35,40,42,42,42,42,46,46,67,70,70,70,71,72,71,68,62,59,56,49,38,32,34,39,41,39,39,39,43,44,68,71,71,72,74,76,72,66,60,57,54,45,36,32,32,35,36,34,32,33,40,41,73,73,73,74,77,77,73,65,57,52,46,39,34,33,30,32,31,31,30,29,34,37,75,74,75,76,80,79,71,60,56,56,48,41,40,41,34,29,27,26,28,28,29,30,76,75,78,79,80,78,68,59,59,62,58,50,46,46,43,36,31,26,22,22,23,24,76,75,78,79,80,77,67,59,60,63,59,53,49,47,45,37,31,25,22,22,22,23],
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
