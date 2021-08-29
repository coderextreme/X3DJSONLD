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
    GeoViewpoint(description='GeoViewpoint_3_76',geoSystem=['GDC'],position=(27.130324311166753,57.084809373449744,29163.6915586987),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(27.130324311166753,57.084809373449744,0.0),range=34996.43,child1Url=['../../tiles/4/StraitsOfHormuz-Small14-12.x3d'],child2Url=['../../tiles/4/StraitsOfHormuz-Small14-13.x3d'],child3Url=['../../tiles/4/StraitsOfHormuz-Small15-12.x3d'],child4Url=['../../tiles/4/StraitsOfHormuz-Small15-13.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/StraitsOfHormuz-Small7-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(27.018229371682303,56.93416835294592,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0143467635,zDimension=22,zSpacing=0.010675709,height=[2,8,4,3,6,6,8,30,18,11,10,14,24,26,43,33,30,33,29,34,34,35,4,3,5,3,3,8,12,20,23,13,16,19,23,30,51,43,66,52,33,36,41,39,6,6,4,0,5,7,14,21,21,13,16,28,34,43,47,64,66,40,33,36,42,42,2,6,5,6,7,25,22,28,15,16,23,38,51,65,54,123,54,40,35,41,44,45,-4,4,4,4,8,19,25,13,13,15,27,38,55,56,71,92,92,42,39,44,55,55,6,1,7,6,6,15,19,12,11,17,27,41,55,53,84,103,79,45,42,53,78,79,8,5,7,10,12,19,14,12,13,17,22,49,46,51,94,136,61,46,48,65,101,103,8,9,8,16,17,14,15,15,14,20,31,35,42,78,80,128,56,50,60,95,141,149,7,9,15,20,13,14,15,15,18,27,35,38,41,64,183,91,57,59,87,140,175,182,9,11,9,10,13,15,14,17,22,34,33,36,51,74,164,74,69,83,132,189,257,252,7,10,9,10,12,15,18,18,22,28,31,34,62,81,187,76,88,115,178,229,308,331,9,8,11,9,12,14,20,18,22,24,33,36,44,63,188,89,112,148,205,295,447,444,12,11,8,10,11,18,23,23,23,26,29,42,55,131,136,101,133,179,241,328,549,558,10,10,7,11,16,19,25,28,29,29,31,59,63,155,136,115,161,210,270,475,628,639,9,10,10,10,15,19,25,30,32,34,31,79,62,191,175,120,173,234,290,451,582,595,8,14,15,16,19,21,24,30,30,36,83,48,111,201,169,119,172,257,419,508,582,589,10,12,13,15,19,24,25,32,31,34,49,47,124,132,97,118,195,311,380,584,437,432,13,12,14,19,21,24,30,32,37,39,53,74,262,107,99,159,164,217,359,533,449,439,11,13,17,15,21,26,23,29,33,56,52,243,183,106,104,169,210,236,375,538,415,418,11,9,17,18,20,23,24,24,32,44,66,212,110,101,129,202,202,298,435,641,477,511,6,13,16,17,18,18,22,29,39,47,155,169,106,86,149,238,296,361,418,543,388,384,8,12,16,17,19,18,22,30,37,48,166,156,109,92,143,225,293,366,417,541,378,381],
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
