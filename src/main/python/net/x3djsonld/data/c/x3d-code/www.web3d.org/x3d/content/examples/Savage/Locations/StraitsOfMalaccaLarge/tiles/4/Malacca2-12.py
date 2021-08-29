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
        texture=ImageTexture(url=['../../images/4/Malacca2-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-5.69708174070451,104.94050057609658,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[1,5,320,254,582,61,0,5,3,3,3,3,3,4,58,35,35,15,2,4,2,0,144,233,267,277,323,18,2,4,4,3,1,0,62,7,20,33,27,8,3,2,5,4,106,640,644,121,16,4,2,2,2,5,91,99,51,23,17,12,1,1,2,4,3,4,543,705,339,403,405,365,48,0,2,5,161,95,52,27,9,3,5,10,2,5,3,4,184,147,274,971,1010,433,348,1,3,345,114,126,44,15,6,6,4,4,2,4,3,5,108,102,163,478,489,643,214,3,72,120,98,71,43,23,19,23,52,16,2,4,4,4,117,111,109,167,276,497,267,89,120,87,89,49,38,24,29,66,96,29,2,5,3,4,133,108,92,102,156,141,126,96,107,87,77,53,29,12,70,133,76,143,3,3,3,4,121,146,124,155,85,102,101,82,68,59,52,41,16,49,70,206,47,40,16,3,4,4,136,118,121,89,84,77,76,70,55,50,49,25,43,56,48,82,49,10,14,3,4,3,117,119,88,95,96,72,46,46,57,37,43,36,57,86,64,51,37,21,2,4,3,2,155,82,99,73,58,65,55,51,52,42,47,35,58,127,64,32,21,2,18,5,5,4,90,91,83,63,68,53,49,51,51,37,36,40,43,73,32,19,18,14,29,3,0,1,79,72,63,58,60,44,42,49,47,41,25,42,30,29,33,26,29,28,12,2,1,0,88,67,59,45,38,34,42,46,44,37,38,30,17,35,35,36,27,25,25,2,3,2,65,57,58,55,47,45,45,36,39,29,29,12,27,32,34,25,33,34,36,2,1,2,66,49,41,39,48,34,38,38,27,38,25,24,29,8,36,27,22,27,31,18,4,4,63,57,57,42,45,44,33,21,27,24,28,26,30,24,4,22,26,29,19,5,4,4,28,44,41,41,37,35,26,31,21,29,20,18,23,27,18,19,23,25,22,4,4,4,32,42,36,40,32,29,31,21,26,27,27,18,12,29,14,1,5,3,12,7,3,4,32,22,31,25,30,29,31,27,25,15,16,19,25,25,26,24,10,17,7,4,3,3,31,19,30,28,29,26,30,29,24,14,9,19,21,24,27,24,17,22,4,3,3,4],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])))])
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
