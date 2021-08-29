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
        texture=ImageTexture(url=['../../images/4/Malacca4-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-3.68233164500902,102.91900048008048,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[526,304,541,462,135,116,121,137,128,107,120,166,163,90,89,63,82,58,45,79,75,94,790,817,476,174,116,106,108,109,112,84,137,111,124,112,86,65,54,37,55,73,52,59,1355,822,390,195,149,111,94,80,86,92,108,101,104,85,91,76,64,40,66,67,50,62,755,569,256,154,102,98,101,87,72,104,93,84,115,95,76,60,72,33,63,36,61,69,659,344,218,122,126,83,79,93,77,108,94,97,111,99,64,65,55,46,44,39,43,38,247,168,122,107,107,105,85,88,81,82,72,89,108,100,87,76,62,64,32,45,25,27,173,121,100,84,85,100,95,98,59,75,77,87,80,78,95,69,47,52,35,37,43,48,135,95,93,77,82,74,82,77,64,67,58,56,69,84,95,84,66,57,52,61,55,57,124,97,78,62,76,63,59,62,50,70,48,55,59,81,91,64,73,72,51,56,63,72,107,83,70,69,64,64,61,60,52,58,50,54,47,58,63,84,71,58,49,40,46,39,75,72,65,61,63,55,52,44,53,52,38,41,52,61,61,69,58,72,57,52,33,25,286,57,68,57,61,53,60,45,45,40,39,53,53,61,69,75,62,57,51,47,28,31,47,54,51,54,50,45,41,39,41,52,41,49,68,74,62,64,65,45,56,51,36,35,45,43,42,47,42,38,42,43,42,35,57,63,64,64,65,55,46,50,55,37,30,28,51,42,36,39,38,51,40,39,44,37,57,59,58,58,59,49,38,34,23,24,13,18,45,40,39,42,38,39,34,53,33,40,54,72,49,42,48,49,44,26,20,14,12,14,45,42,37,43,30,39,39,33,34,37,48,56,37,41,57,43,24,14,19,13,16,12,47,39,39,31,32,37,35,32,34,30,35,34,30,27,44,17,15,18,12,15,9,10,44,37,37,49,41,43,44,66,28,22,21,31,15,24,27,18,22,21,27,29,15,11,38,38,38,40,34,40,60,65,19,19,28,30,35,20,20,26,18,43,33,18,26,29,41,32,36,38,29,41,49,27,30,26,25,28,35,29,45,36,33,30,15,31,44,32,40,36,35,39,29,34,52,25,35,25,27,26,35,28,53,36,37,28,15,32,43,34],
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
