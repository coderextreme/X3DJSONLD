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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small3-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.78518503735335,56.33160427093061,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[83,156,232,2,2,2,2,5,2,4,0,5,4,0,-1,3,1,4,2,2,8,5,123,166,68,7,2,6,0,4,3,6,7,10,1,3,0,0,5,0,3,3,1,-2,334,192,45,24,14,1,4,3,4,4,0,0,0,7,2,0,1,3,5,1,1,3,448,269,112,88,276,-4,0,3,2,7,2,1,6,0,-1,0,0,3,0,3,2,-2,431,376,115,141,117,16,0,0,5,5,2,0,-1,0,-1,3,2,0,0,-1,4,4,96,442,421,209,43,91,14,3,2,3,7,4,5,7,0,6,1,0,-2,7,0,-5,203,388,405,185,202,145,0,0,2,2,1,0,0,1,3,22,2,5,3,8,1,0,357,324,394,356,198,198,2,4,4,0,-3,0,3,13,6,17,-3,5,0,0,6,14,445,389,24,181,135,210,10,1,6,13,10,-5,6,-7,-3,-5,-4,-1,0,0,0,0,499,352,322,73,8,103,25,4,1,3,0,-1,3,-14,-1,-1,-1,0,-3,1,0,0,468,380,294,164,102,-2,5,12,1,-1,1,4,3,0,0,-2,-11,-3,1,3,4,0,425,441,369,288,185,1,137,163,33,12,0,3,0,8,5,3,0,-1,1,0,1,0,328,194,371,92,43,5,193,57,22,22,6,5,0,0,-7,0,4,1,3,7,-2,3,434,505,131,173,118,183,63,9,9,39,150,3,6,6,0,1,-3,-6,0,10,0,1,476,653,700,495,276,79,15,13,34,164,14,12,1,6,0,-1,8,9,-2,1,-13,-1,662,677,767,517,231,204,115,114,223,49,18,-4,0,0,-1,0,-2,9,0,-4,-2,-1,732,799,823,698,513,526,482,373,308,173,16,-11,0,-6,-2,2,5,-2,0,7,0,11,672,840,817,952,790,645,524,582,341,305,153,-13,1,1,3,2,4,-3,6,5,11,8,765,854,812,1058,1007,706,582,722,361,206,151,-1,-22,3,-2,0,1,0,-3,-7,1,8,931,869,813,1021,1169,674,638,534,358,195,7,14,-5,13,-5,5,0,1,3,13,0,-2,881,942,810,963,1147,1013,342,511,632,343,160,194,2,-1,2,0,4,-3,3,8,5,-2,555,734,794,901,1228,935,329,509,621,469,271,29,-5,-2,0,1,-1,-2,2,0,-3,-5,537,718,773,898,1225,935,329,508,621,462,287,28,-6,-1,0,-1,-2,-1,3,0,-4,-3],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])))])
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
