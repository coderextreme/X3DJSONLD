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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small15-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(27.130324311166753,56.03032222992296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[10,4,9,1,5,10,7,3,-11,14,0,1,-9,5,12,12,12,3,-6,-2,0,0,3,7,4,6,3,7,12,7,2,-1,13,-9,-1,12,12,12,2,-3,-3,-7,0,0,10,6,10,9,7,8,7,1,4,5,4,3,26,17,14,11,-6,-9,-4,-4,-7,1,14,9,9,12,8,4,6,7,5,6,3,2,4,13,17,3,-8,-16,-7,-1,-5,-8,12,12,14,12,13,14,11,9,8,7,4,4,-3,2,3,-1,-3,-5,0,0,-2,-5,17,16,11,15,17,13,19,10,9,7,5,5,0,2,-5,-6,2,0,0,0,0,2,20,19,13,19,18,17,15,12,11,14,11,11,9,-3,-9,-14,-3,0,1,0,0,2,20,34,21,21,23,13,13,14,13,17,15,17,16,10,3,-7,3,-2,5,2,2,3,20,26,29,23,20,22,16,16,18,16,18,18,22,18,17,8,7,7,4,4,4,1,32,25,28,30,25,23,18,19,17,20,21,19,22,32,56,37,37,12,23,12,8,7,32,32,33,48,38,20,22,19,20,24,23,25,30,33,33,41,55,75,35,48,21,27,42,34,28,39,28,18,26,23,20,22,24,22,30,31,49,61,68,51,45,61,58,56,53,39,34,32,28,28,26,24,24,27,30,26,28,32,34,43,68,48,38,39,51,43,80,66,57,43,34,32,31,38,28,29,32,37,28,47,45,34,38,58,41,31,37,48,79,52,52,75,45,46,35,36,36,39,41,32,38,42,42,44,34,33,35,31,30,23,141,74,54,54,73,93,56,56,60,51,36,35,37,45,37,32,32,29,26,24,27,26,371,403,82,72,71,81,70,65,63,56,46,44,42,40,37,32,29,24,25,22,20,17,323,383,358,258,113,87,78,65,53,52,50,41,35,41,40,32,35,32,24,19,19,17,236,279,341,429,368,402,113,147,71,63,62,58,44,41,33,31,29,30,22,30,20,23,100,224,323,369,397,369,375,386,202,111,62,55,55,48,47,60,41,18,23,20,18,17,62,92,175,251,305,247,355,373,357,353,227,206,192,150,59,30,26,27,36,43,47,49,60,63,71,137,170,152,238,265,264,262,201,217,200,174,156,53,34,30,38,25,21,19,62,59,70,119,152,150,230,258,259,253,192,226,204,166,161,57,36,29,34,22,19,15],
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
