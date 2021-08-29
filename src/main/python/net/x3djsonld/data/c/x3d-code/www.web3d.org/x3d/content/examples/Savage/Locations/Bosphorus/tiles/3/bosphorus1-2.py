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
    GeoViewpoint(description='GeoViewpoint_3_12',geoSystem=['GDC'],position=(41.280922627855375,29.17931591246088,40740.95510878033),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.280922627855375,29.17931591246088,0.0),range=48889.145,child1Url=['../../tiles/4/bosphorus2-2.x3d'],child2Url=['../../tiles/4/bosphorus3-2.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus1-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.06225017873692,29.030952729968703,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.014129827,zDimension=21,zSpacing=0.021867245,height=[-2,21,150,111,107,127,126,157,171,200,168,166,206,186,134,165,171,182,312,256,161,134,120,11,125,95,74,137,127,100,140,220,194,176,304,262,210,196,129,196,191,189,80,74,109,112,6,97,48,115,140,98,136,122,212,229,301,220,185,159,163,71,153,48,42,22,131,87,2,6,20,42,86,196,178,182,129,145,177,126,123,70,88,40,29,11,95,124,87,107,53,9,-2,60,209,237,294,144,119,97,169,113,136,52,33,8,13,84,46,87,25,2,2,1,19,76,44,88,237,184,115,71,73,148,169,58,4,84,118,139,157,137,131,31,51,-3,6,196,183,195,144,95,111,82,24,133,53,71,36,32,122,100,133,74,159,137,200,226,-7,-2,0,117,108,102,102,96,9,4,1,38,40,101,94,101,73,93,57,110,125,109,113,66,1,6,4,10,78,30,63,1,72,39,31,49,57,40,29,17,65,24,84,63,55,36,0,2,1,1,0,0,0,1,2,1,3,1,1,0,2,1,1,5,1,0,0,0,0,1,0,0,0,0,5,1,1,2,3,0,1,0,1,0,0,1,0,1,0,0,1,0,2,-1,2,2,1,1,0,1,0,0,0,0,2,0,1,0,2,2,2,1,0,0,1,2,1,1,3,0,1,0,0,0,2,1,0,0,0,0,1,2,1,1,2,1,2,0,2,2,1,1,1,0,0,0,0,0,0,1,0,0,0,1,0,1,1,2,0,0,1,3,0,0,0,0,0,0,0,1,0,-1,1,1,2,2,3,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,1,1,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,1,2,1,1,2,2,2,0,2,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,1,0,2,1,1,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,2,1,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,2,2,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
