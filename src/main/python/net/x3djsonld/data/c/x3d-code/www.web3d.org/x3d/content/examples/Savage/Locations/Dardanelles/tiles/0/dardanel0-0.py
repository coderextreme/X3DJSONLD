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
    component(level=1,name='Geospatial'),
    meta(content='dardanel0-0.x3d',name='title'),
    meta(content='X3D Earth tile file for Dardanelles location',name='description'),
    meta(content='Byounghyun Yoo, Don Brutzman',name='creator'),
    meta(content='6 September 2010',name='created'),
    meta(content='12 Jume 2012',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/Dardanelles.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/tiles/0/dardanel0-0.x3d',name='identifier'),
    meta(content='Rez, http://planet-earth.org/Rez/RezIndex.html',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../../../license.html',name='license')]),
  Scene=Scene(
    children=[
    GeoViewpoint(description='GeoViewpoint_0_00',geoSystem=['GDC'],orientation=(-1,0,0,1.57),position=(40.16643453115464,26.49987728550963,189236.70777323423),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(40.16643453115464,26.49987728550963,0),geoSystem=['GDC'])),
    GeoLOD(center=(40.16643453115464,26.49987728550963,0.0),child1Url=['../../tiles/1/dardanel0-0.x3d'],child2Url=['../../tiles/1/dardanel0-1.x3d'],range=227084.05,
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(repeatS=False,repeatT=False,url=['../../images/0/dardanel0-0.jpg'])),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(39.4280100664,25.5334665451,0.0),geoSystem=["GD"],height=[1,0,1,0,0,0,1,0,1,0,0,0,0,0,160,226,390,907,439,558,493,496,0,1,1,0,0,0,232,314,91,32,4,1,-1,5,1,22,242,384,633,328,395,344,1,0,1,0,0,0,6,187,422,283,436,222,64,105,-3,3,32,161,234,322,234,242,0,0,2,1,1,1,2,427,295,189,223,505,717,956,833,378,191,372,662,651,316,296,0,1,2,1,1,1,2,145,339,158,185,599,329,791,1197,1134,593,502,470,552,301,373,0,0,4,4,2,0,2,81,151,73,68,123,140,270,599,993,446,266,334,287,549,578,0,0,0,0,2,3,2,67,194,321,243,216,185,439,623,349,752,721,367,162,300,272,1,0,0,0,2,2,3,13,91,202,463,551,237,417,209,242,515,421,247,306,557,566,0,0,0,1,0,2,2,5,2,340,318,263,390,497,169,127,249,536,249,464,625,523,0,0,0,3,1,2,5,81,63,36,161,370,346,588,588,321,313,88,435,782,544,486,0,1,476,269,259,2,2,2,137,3,80,377,620,333,195,85,78,233,232,216,204,196,1,0,1,3,2,0,0,1,155,192,-2,33,237,432,426,397,52,24,45,143,293,304,1,1,1,1,3,0,1,0,57,64,152,4,212,402,336,104,77,20,13,45,0,0,0,0,2,0,0,0,0,1,0,197,124,145,0,19,185,2,67,99,39,-2,-1,-2,367,702,0,2,1,0,0,2,0,1,3,174,60,6,5,4,2,0,51,-1,-4,-3,1,2,0,1,0,0,0,0,1,1,1,1,3,36,30,4,2,1,1,0,-1,0,1,0,0,1,1,0,29,36,26,15,9,0,6,3,16,345,12,3,0,0,1,0,3,1,0,1,1,2,28,103,103,54,65,155,267,56,77,24,152,524,20,-1,0,0,0,1,1,0,0,1,1,70,1,11,54,26,85,141,558,376,204,502,526,0,0,2,0,2,0,0,0,2,2,6,10,43,67,28,269,161,114,116,163,181,317,359,-3,0,465,111,366,215,72,137,116,8,7,59,71,127,88,211,261,179,133,258,226,196,46,7,446,114,368,207,71,141,119,8,7,58,68,127,86,204,259,178,133,258,226,203,43,7],normalPerVertex=False,xDimension=22,xSpacing=0.092039116,zDimension=22,zSpacing=0.07032614,
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

print ("python x3d.py load successful for dardanel0-0.py")
