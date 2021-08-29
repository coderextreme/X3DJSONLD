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
    GeoViewpoint(description='GeoViewpoint_3_13',geoSystem=['GDC'],position=(41.280922627855375,29.47604227744523,40740.95510878033),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.280922627855375,29.47604227744523,0.0),range=48889.145,child1Url=['../../tiles/4/bosphorus2-3.x3d'],child2Url=['../../tiles/4/bosphorus3-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus1-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.06225017873692,29.327679094953055,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.014129827,zDimension=21,zSpacing=0.021867245,height=[134,70,66,75,103,102,94,150,107,135,157,106,190,185,227,210,211,237,237,198,219,124,74,50,82,68,56,170,172,221,178,142,134,158,153,174,201,242,142,84,67,181,186,121,22,17,32,125,128,143,152,183,160,195,169,201,197,198,199,231,141,91,55,87,91,128,124,144,139,94,202,176,115,109,95,138,157,177,103,110,161,149,106,49,124,109,116,168,87,84,118,169,125,114,138,104,146,127,86,69,128,53,146,88,24,46,26,51,101,159,137,103,79,112,139,110,131,110,96,125,148,108,143,122,108,47,37,75,11,70,67,20,74,103,54,86,110,69,108,70,61,52,98,32,67,58,98,91,49,0,6,16,33,55,93,61,79,62,30,76,30,34,29,4,1,-1,0,0,0,2,5,0,0,0,1,0,17,0,4,1,4,0,0,0,1,0,2,1,3,2,1,0,1,0,1,0,0,0,1,1,1,0,1,0,1,0,0,2,0,0,0,1,2,0,4,1,3,1,2,0,0,1,0,0,1,0,0,1,1,0,2,0,1,0,1,1,4,2,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,0,2,0,2,1,0,0,0,0,0,-2,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,2,1,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,-1,0,0,1,1,0,1,0,0,0,0,2,0,1,0,0,1,0,1,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
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
