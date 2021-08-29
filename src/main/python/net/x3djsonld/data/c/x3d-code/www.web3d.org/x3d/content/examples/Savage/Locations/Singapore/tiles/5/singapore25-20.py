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
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0.6,0.6,0.6)),
        texture=ImageTexture(url=['../../images/5/singapore25-20.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4305560726498494,103.87709668258039,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[6,6,7,7,8,8,6,4,2,1,1,2,3,4,7,10,14,18,21,24,28,34,41,50,55,56,57,56,53,47,44,44,49,58,65,68,5,5,5,6,6,6,6,4,3,2,1,0,1,2,4,6,10,15,19,22,25,27,33,42,46,47,47,44,41,37,36,38,43,54,63,67,5,5,5,6,6,6,6,5,4,2,1,0,0,1,2,4,7,10,15,19,23,26,30,35,38,37,36,34,32,30,29,32,37,47,56,62,4,5,5,6,6,6,6,6,4,3,1,0,0,0,1,2,4,7,10,16,21,26,30,32,31,27,25,24,24,23,24,25,30,38,47,56,4,5,5,5,5,6,6,6,5,4,3,1,0,0,0,1,2,4,9,15,22,29,33,33,31,27,24,22,21,21,22,23,27,32,40,49,4,5,5,5,5,6,6,6,6,5,4,2,1,0,0,0,1,3,8,16,25,33,38,39,37,32,27,23,21,21,22,23,26,29,34,41,4,4,4,5,5,5,5,6,6,6,5,3,2,1,1,2,4,7,13,20,27,34,38,40,39,36,32,26,23,22,22,23,25,28,31,36,4,4,4,5,5,5,5,6,6,6,6,5,4,2,3,5,9,14,20,26,31,34,37,38,39,40,37,32,27,23,22,23,25,28,31,33,4,4,4,4,4,5,5,5,5,6,6,7,6,5,6,9,14,20,25,29,31,33,35,37,38,40,39,36,31,26,23,23,24,27,31,34,4,4,4,4,4,5,5,5,5,6,6,7,8,8,11,14,19,24,27,28,30,31,33,35,37,38,38,39,36,30,26,24,23,27,31,35,4,4,4,4,4,5,6,6,7,7,8,8,10,11,13,16,19,24,27,28,29,30,31,33,35,36,37,39,38,34,29,24,22,24,29,33,4,4,4,4,5,6,8,9,10,10,10,11,11,12,13,13,15,19,22,26,28,29,30,31,32,34,36,36,36,37,34,26,20,20,22,26,4,4,4,4,6,8,10,12,12,12,12,12,12,13,13,13,13,14,18,23,26,28,29,29,30,32,33,33,34,37,34,23,16,15,16,18,4,4,5,6,8,10,11,12,12,13,12,12,12,12,12,13,12,12,14,17,22,26,28,28,29,29,30,33,33,30,25,17,11,10,10,11,3,4,6,8,10,11,11,12,12,12,12,12,12,12,12,12,12,11,11,12,16,22,26,28,28,28,28,30,28,23,17,11,8,7,6,6,2,4,6,9,10,11,11,11,12,12,12,12,12,12,12,12,12,12,11,9,11,15,19,25,28,29,27,22,17,13,10,8,7,7,7,8,0,2,6,8,10,10,10,11,11,11,11,12,12,12,12,11,12,12,11,8,7,8,13,21,26,26,23,15,9,7,6,7,7,7,8,8,-3,-1,2,5,7,9,10,10,10,11,11,11,11,12,12,11,10,10,11,11,8,3,5,11,14,15,13,9,7,7,7,7,7,8,8,9,-6,-5,-1,2,5,7,9,9,10,10,10,10,11,11,11,11,10,10,10,12,8,0,0,3,5,5,6,6,6,7,7,7,7,8,9,9,-5,-5,-4,-1,1,4,6,8,9,9,9,9,9,10,11,11,11,9,8,8,5,0,0,3,4,5,6,7,8,8,8,7,7,8,9,9,-5,-5,-6,-5,-2,1,4,6,8,8,8,8,8,8,9,11,10,8,7,5,3,1,1,3,4,4,5,8,9,8,8,7,7,8,8,8,-3,-5,-6,-5,-4,-2,0,3,5,7,7,7,7,7,7,7,6,4,3,2,2,2,3,4,5,4,5,7,8,8,8,8,8,7,6,7,-1,-4,-5,-5,-6,-5,-2,0,3,5,6,6,6,6,6,5,3,0,0,0,1,3,4,5,5,4,5,6,7,8,8,9,8,7,6,6],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(1.3519706612479037,103.81964454606431,0),geoSystem=['GDC'])))])
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
