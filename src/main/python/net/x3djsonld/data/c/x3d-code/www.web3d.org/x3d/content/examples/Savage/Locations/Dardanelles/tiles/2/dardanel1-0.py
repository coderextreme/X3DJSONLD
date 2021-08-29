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
    meta(content='dardanel1-0.x3d',name='title'),
    meta(content='X3D Earth tile file for Dardanelles location',name='description'),
    meta(content='Byounghyun Yoo, Don Brutzman',name='creator'),
    meta(content='6 September 2010',name='created'),
    meta(content='12 Jume 2012',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/Dardanelles.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/tiles/2/dardanel1-0.x3d',name='identifier'),
    meta(content='Rez, http://planet-earth.org/Rez/RezIndex.html',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../../../license.html',name='license')]),
  Scene=Scene(
    children=[
    GeoViewpoint(description='GeoViewpoint_2_10',geoSystem=['GDC'],orientation=(-1,0,0,1.57),position=(40.535646763531965,26.016671915304816,94618.35388661711),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(40.16643453115464,26.49987728550963,0),geoSystem=['GDC'])),
    GeoLOD(center=(40.535646763531965,26.016671915304816,0.0),child1Url=['../../tiles/3/dardanel1-0.x3d'],child2Url=['../../tiles/3/dardanel1-1.x3d'],range=113542.02,
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(repeatS=False,repeatT=False,url=['../../images/2/dardanel1-0.jpg'])),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.16643453115464,25.5334665451,0.0),geoSystem=["GD"],height=[0,0,0,1,469,335,283,100,267,1,1,0,1,3,2,35,143,74,2,71,77,86,0,0,1,1,2,47,287,61,104,52,1,2,2,2,2,3,26,23,5,2,4,4,1,0,0,1,2,2,3,2,1,1,1,1,1,1,1,0,156,56,195,79,0,4,0,0,1,1,1,2,3,3,0,1,0,1,1,1,1,4,62,136,34,148,7,8,1,1,1,1,1,2,1,1,4,1,0,1,1,1,0,7,57,131,61,347,157,163,1,0,2,2,2,3,1,1,1,0,1,1,2,0,1,2,148,47,50,246,214,237,0,2,0,0,1,2,1,0,0,1,0,0,0,2,0,1,0,2,209,129,126,146,76,554,806,446,3,1,2,1,0,0,0,0,0,0,0,3,0,0,0,257,156,164,378,1424,692,112,1,2,2,0,1,0,0,0,0,0,2,0,0,1,1,2,3,2,121,83,7,1,0,1,0,1,1,0,0,0,0,0,0,0,1,0,1,1,1,1,2,0,1,0,0,1,0,2,0,0,0,0,0,0,1,0,1,0,1,2,1,1,1,-1,0,0,0,1,0,0,0,1,1,0,0,1,0,0,1,2,2,2,0,0,1,0,0,1,0,0,0,0,1,0,0,0,29,28,37,24,23,62,16,21,11,9,2,0,2,0,0,1,0,0,0,1,0,1,34,42,50,43,18,57,149,111,6,5,2,0,1,0,0,0,0,0,1,0,1,2,30,44,102,71,99,101,53,117,65,56,2,2,2,0,0,0,0,0,0,2,0,2,13,154,234,266,25,54,10,44,313,312,0,0,0,0,1,0,0,0,1,0,0,3,0,2,69,119,0,28,15,6,51,65,0,1,0,1,0,0,1,0,0,0,1,1,2,3,2,2,4,5,18,35,22,19,1,0,2,0,0,1,1,0,0,0,2,2,2,2,5,5,10,24,43,35,67,64,31,14,8,47,91,71,58,39,22,15,13,100,21,25,8,5,5,30,49,97,56,68,446,150,114,267,368,377,207,235,71,80,141,89,119,54,8,5,7,6,58,42,68,63,427,143,118,261,373,379,197,245,70,81,143,83,122,55,8,5,7,7,57,40,63,57],normalPerVertex=False,xDimension=22,xSpacing=0.046019558,zDimension=22,zSpacing=0.03516307,
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

print ("python x3d.py load successful for dardanel1-0.py")
