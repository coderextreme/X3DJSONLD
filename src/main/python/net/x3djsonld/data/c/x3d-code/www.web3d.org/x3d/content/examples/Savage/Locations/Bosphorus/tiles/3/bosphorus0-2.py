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
    GeoViewpoint(description='GeoViewpoint_3_02',geoSystem=['GDC'],position=(40.84357772961846,29.17931591246088,40740.95510878033),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(40.84357772961846,29.17931591246088,0.0),range=48889.145,child1Url=['../../tiles/4/bosphorus0-2.x3d'],child2Url=['../../tiles/4/bosphorus1-2.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus0-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.6249052805,29.030952729968703,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.014129827,zDimension=21,zSpacing=0.021867245,height=[56,343,285,135,81,415,316,203,178,133,150,102,34,27,51,45,44,68,93,90,108,54,30,15,16,1,2,2,0,15,52,43,36,17,91,80,5,51,10,86,25,18,64,25,0,3,1,0,0,0,0,0,0,1,2,0,-1,-2,0,2,0,0,-1,8,2,5,0,-1,4,0,-1,0,0,-1,-1,0,0,1,-2,1,0,0,0,2,0,1,0,1,0,-3,-1,-1,-1,0,0,-1,-1,0,0,0,0,1,0,0,0,-2,0,0,0,1,-2,-2,-5,-2,0,0,-1,-2,0,0,0,-1,-2,4,2,0,0,0,0,0,2,0,-1,0,0,-1,-3,-2,0,-1,0,0,0,-1,0,0,0,-1,0,0,0,-1,0,0,-2,-1,-1,-1,0,0,-1,-2,0,0,1,0,-1,-1,-1,-1,0,-2,-3,-1,1,0,-2,0,-2,0,-1,0,-2,0,-3,-1,-1,-3,-2,0,0,0,5,2,0,2,5,2,0,-1,-1,-2,0,0,-2,-3,0,0,0,0,4,-3,3,-4,16,10,8,11,20,11,0,0,0,-1,-3,-2,147,0,0,0,0,-2,0,0,3,-4,-17,39,3,13,51,95,-1,-1,-1,0,0,0,48,44,-2,0,0,-1,-2,-1,1,3,0,3,52,76,115,89,0,0,0,-1,0,0,-1,-2,0,-1,0,6,21,27,28,69,85,79,72,64,52,30,0,89,0,0,-2,0,-1,-6,85,24,39,59,102,128,151,206,150,157,132,102,72,62,0,0,0,0,-1,3,1,17,76,189,135,176,138,214,292,395,411,194,145,115,92,100,0,0,-3,-2,2,35,42,60,154,188,258,208,216,200,216,264,205,151,137,109,200,180,0,17,39,47,74,72,93,106,157,276,221,181,142,133,122,110,117,166,254,151,123,98,19,32,15,44,30,69,73,85,128,140,147,151,127,115,127,125,129,115,111,127,112,134,78,101,161,141,117,126,144,161,134,138,136,157,135,122,112,143,95,112,215,123,79,76,-2,20,152,118,104,129,129,157,161,203,169,165,204,183,134,166,169,186,326,269,168,139,-2,21,150,111,107,127,126,157,171,200,168,166,206,186,134,165,171,182,312,256,161,134],
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
