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
        texture=ImageTexture(url=['../../images/5/newport10-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.35539950857997,-71.74725013871318,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[41,47,47,45,40,44,51,50,44,45,51,51,46,44,46,44,39,36,33,33,29,28,39,39,36,41,43,43,44,46,44,47,49,44,46,50,52,53,45,41,38,37,33,32,34,35,33,39,45,40,36,39,42,48,49,43,50,53,49,53,45,45,43,40,38,38,32,37,37,41,46,42,38,42,47,47,42,40,46,50,51,55,52,47,44,48,48,48,36,39,40,39,40,39,39,43,41,39,39,41,47,52,51,51,51,45,48,51,47,48,39,36,34,36,40,40,42,39,36,36,42,45,46,45,49,50,48,48,51,46,43,44,40,39,39,40,43,42,38,38,36,37,43,47,50,51,48,47,47,48,50,52,49,48,44,47,44,43,44,45,45,43,39,39,42,49,50,44,43,47,49,50,51,51,48,48,44,45,41,41,44,48,47,42,40,40,43,46,44,44,45,47,49,50,49,49,52,53,31,33,38,47,51,52,49,43,44,47,52,48,44,46,52,54,55,53,51,52,56,56,31,33,38,49,52,51,50,48,49,52,55,50,47,47,49,49,50,53,57,55,52,52,36,40,39,45,51,54,54,50,50,51,54,50,45,43,43,49,48,49,55,59,58,58,45,49,47,50,55,55,50,47,51,53,50,41,40,43,45,52,58,61,62,62,60,60,51,47,52,57,58,55,48,47,50,52,48,44,44,49,54,49,49,52,58,59,62,62,55,53,59,59,60,57,52,49,44,48,45,40,45,49,49,55,49,51,58,60,65,65,55,59,61,61,66,61,54,49,43,46,49,51,49,47,49,57,56,57,57,62,67,67,60,60,60,66,67,59,51,48,46,43,48,54,49,47,51,56,54,51,55,61,65,65,62,64,68,64,56,55,54,48,47,49,52,48,44,43,45,51,47,46,49,58,61,60,62,64,62,58,55,55,57,53,47,46,50,45,38,41,45,49,44,44,49,59,61,60,53,59,58,55,53,54,55,51,51,49,48,51,45,43,41,43,42,42,46,49,54,54,53,57,58,57,52,50,49,48,52,50,46,47,47,44,43,42,39,39,45,46,47,46,54,54,54,56,51,47,44,43,45,46,45,46,46,45,44,41,35,34,41,43,37,36,51,49,49,51,49,44,43,40,42,45,44,43,43,42,44,40,33,29,35,36,33,34,51,49,48,49,48,43,44,40,43,45,43,43,41,41,43,39,33,28,34,34,34,34],
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
