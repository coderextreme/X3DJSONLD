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
        texture=ImageTexture(url=['../../images/5/singapore1-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.220994975577994,103.7334663412902,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[5,3,2,4,6,8,9,7,5,3,3,4,5,5,4,3,0,0,0,0,1,2,1,1,3,4,5,4,4,4,4,4,4,7,30,50,9,8,8,10,12,14,13,10,6,3,3,4,5,6,6,5,1,0,0,0,2,2,1,1,4,6,5,4,4,4,4,4,4,8,34,57,8,9,11,15,18,17,14,10,6,3,2,2,3,3,4,3,2,0,0,0,2,3,2,4,10,12,7,4,4,4,4,4,4,7,25,42,5,9,14,19,21,19,14,9,5,3,2,1,1,1,2,2,2,1,0,0,3,6,9,12,20,23,14,6,5,4,4,4,4,5,16,27,-1,6,17,21,23,18,11,8,5,4,2,1,1,1,1,2,2,1,0,1,10,21,33,43,49,48,33,20,11,4,4,4,4,4,9,15,-7,4,18,22,21,15,8,5,5,4,3,2,1,1,1,2,3,2,1,5,19,37,55,69,73,71,52,34,19,6,5,4,4,4,4,5,-2,4,11,13,12,8,4,2,2,2,3,2,2,1,0,1,4,9,14,24,38,51,62,70,72,72,64,55,37,21,11,4,4,4,4,4,1,3,4,4,3,1,0,0,0,1,3,3,2,1,0,1,6,15,26,40,53,63,68,71,71,72,75,73,55,37,20,5,4,4,4,4,4,4,4,3,2,2,1,0,0,0,2,2,2,0,0,1,6,15,27,39,51,60,65,69,70,72,74,73,66,56,38,22,12,4,4,4,5,4,3,2,2,3,3,0,-2,-1,1,2,1,0,0,1,6,15,27,38,49,58,63,67,69,71,72,73,76,73,56,38,20,5,4,4,4,3,3,4,4,4,4,1,-1,-1,2,4,4,3,2,2,5,12,22,34,46,56,61,66,68,70,71,72,74,74,66,56,38,22,12,4,3,3,3,4,5,5,5,2,-1,0,2,5,6,6,4,4,5,9,18,29,43,54,60,65,67,69,70,71,73,74,76,73,56,38,20,6,0,1,2,2,3,4,4,2,0,0,0,2,5,6,7,7,7,9,14,21,34,46,56,63,66,69,70,71,72,73,74,74,65,55,34,16,0,0,1,1,1,2,3,2,0,-2,-2,0,2,6,9,10,10,9,9,14,25,38,51,61,64,67,68,69,70,70,71,72,73,70,46,25,1,2,4,2,0,0,1,0,-2,-5,-7,-5,-1,0,3,6,9,10,10,12,18,26,38,46,50,54,55,55,54,53,51,50,48,44,31,19,5,6,7,3,0,0,0,0,-3,-8,-12,-11,-7,-4,-1,1,7,10,10,11,11,15,24,31,36,39,40,40,38,35,30,25,20,15,12,11,3,5,5,3,0,0,0,0,0,-3,-7,-10,-13,-12,-9,-4,0,5,8,11,11,12,17,21,23,26,26,26,25,23,20,16,13,10,10,10,0,2,2,2,2,1,0,1,2,0,-1,-9,-18,-21,-17,-12,-7,0,5,10,10,10,11,11,12,12,12,12,12,12,11,10,10,10,10,12,0,1,2,6,9,10,9,8,6,4,1,-5,-13,-18,-19,-18,-14,-7,1,6,8,8,8,9,9,10,10,10,10,10,10,10,10,10,16,21,1,1,2,11,19,22,20,16,11,7,3,-1,-7,-14,-21,-23,-20,-13,-4,2,5,7,7,8,9,9,10,10,10,10,10,10,10,12,23,33,1,1,3,12,22,28,30,24,14,8,4,1,-1,-7,-14,-17,-14,-10,-2,2,5,7,7,7,8,9,9,10,10,10,10,10,13,18,30,41,2,1,3,12,23,33,39,30,15,7,4,3,2,-1,-6,-7,-6,-2,1,5,6,7,7,7,7,8,9,9,10,10,10,11,18,26,38,49,2,1,3,13,25,34,38,27,11,4,3,2,2,1,-1,-1,0,0,3,6,7,7,7,7,6,7,8,9,9,10,10,12,21,31,43,52],
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
