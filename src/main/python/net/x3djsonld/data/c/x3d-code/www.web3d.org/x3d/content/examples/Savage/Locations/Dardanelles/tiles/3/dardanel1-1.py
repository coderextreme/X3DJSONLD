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
    meta(content='dardanel1-1.x3d',name='title'),
    meta(content='X3D Earth tile file for Dardanelles location',name='description'),
    meta(content='Byounghyun Yoo, Don Brutzman',name='creator'),
    meta(content='6 September 2010',name='created'),
    meta(content='12 Jume 2012',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/Dardanelles.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/tiles/3/dardanel1-1.x3d',name='identifier'),
    meta(content='Rez, http://planet-earth.org/Rez/RezIndex.html',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../../../license.html',name='license')]),
  Scene=Scene(
    children=[
    GeoViewpoint(description='GeoViewpoint_3_11',geoSystem=['GDC'],orientation=(-1,0,0,1.57),position=(40.535646763531965,26.258274600407223,67800.45584024992),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(40.16643453115464,26.49987728550963,0),geoSystem=['GDC'])),
    GeoLOD(center=(40.535646763531965,26.258274600407223,0.0),child1Url=['../../tiles/4/dardanel2-1.x3d'],child2Url=['../../tiles/4/dardanel3-1.x3d'],range=81360.55,
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(repeatS=False,repeatT=False,url=['../../images/3/dardanel1-1.jpg'])),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.16643453115464,26.016671915304816,0.0),geoSystem=["GD"],height=[2,1,0,1,1,1,3,3,3,3,27,68,144,129,74,8,5,27,66,98,74,84,3,1,1,0,2,1,2,3,3,3,2,34,26,20,33,6,1,1,2,1,4,4,0,2,1,0,1,0,2,1,0,3,2,9,149,96,56,113,192,13,78,6,2,5,2,1,2,0,1,0,2,1,0,0,4,14,55,94,140,180,33,95,153,95,0,9,1,0,1,1,1,0,1,0,0,0,8,9,47,211,119,137,58,127,312,135,140,162,0,0,0,0,2,0,0,0,2,3,2,0,124,73,44,65,52,67,205,154,185,237,1,1,0,0,0,0,2,0,0,0,1,0,0,1,0,225,227,158,160,131,132,144,0,1,0,0,0,1,0,0,1,1,3,0,0,0,1,0,1,0,208,278,172,162,0,0,0,0,0,2,0,2,2,1,0,0,0,0,0,0,0,3,1,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,1,0,0,2,1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,0,1,2,0,1,1,1,1,1,0,1,0,0,0,0,1,0,0,0,0,2,1,1,1,3,1,1,1,1,1,0,1,1,0,1,29,32,26,9,40,34,33,32,21,97,60,6,18,42,0,0,7,10,1,1,1,10,34,57,41,34,50,57,49,54,20,46,60,114,144,31,93,53,7,5,1,1,4,23,30,32,44,97,100,136,73,54,101,106,112,65,65,49,106,152,69,58,0,1,2,4,13,51,156,336,245,131,246,208,30,12,52,48,19,10,38,80,227,308,0,0,3,2,0,3,2,2,65,178,125,244,4,19,29,30,14,4,7,15,54,63,0,2,1,1,2,4,3,2,2,3,2,3,3,3,5,17,13,28,28,21,27,20,2,1,2,1,2,2,2,4,7,4,4,6,8,9,25,26,44,52,45,54,59,65,13,38,95,82,21,46,26,4,7,4,5,5,7,21,28,42,51,47,97,95,53,66,128,103,90,138,119,84,53,34,8,6,7,5,10,6,6,12,55,12,30,31,58,59,131,99,84,129,122,86,55,34,9,6,7,5,10,6,7,12,55,12,31,33,55,55],normalPerVertex=False,xDimension=22,xSpacing=0.023009779,zDimension=22,zSpacing=0.03516307,
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

print ("python x3d.py load successful for dardanel1-1.py")
