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
    meta(content='dardanel1-2.x3d',name='title'),
    meta(content='X3D Earth tile file for Dardanelles location',name='description'),
    meta(content='Byounghyun Yoo, Don Brutzman',name='creator'),
    meta(content='6 September 2010',name='created'),
    meta(content='12 Jume 2012',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/Dardanelles.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/tiles/3/dardanel1-2.x3d',name='identifier'),
    meta(content='Rez, http://planet-earth.org/Rez/RezIndex.html',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../../../license.html',name='license')]),
  Scene=Scene(
    children=[
    GeoViewpoint(description='GeoViewpoint_3_12',geoSystem=['GDC'],orientation=(-1,0,0,1.57),position=(40.535646763531965,26.741479970612037,67800.45584024992),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(40.16643453115464,26.49987728550963,0),geoSystem=['GDC'])),
    GeoLOD(center=(40.535646763531965,26.741479970612037,0.0),child1Url=['../../tiles/4/dardanel2-2.x3d'],child2Url=['../../tiles/4/dardanel3-2.x3d'],range=81360.55,
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(repeatS=False,repeatT=False,url=['../../images/3/dardanel1-2.jpg'])),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.16643453115464,26.49987728550963,0.0),geoSystem=["GD"],height=[84,172,162,242,389,415,367,547,602,458,432,303,338,273,220,185,197,151,183,144,95,93,4,21,91,127,192,256,245,296,276,326,396,221,307,420,472,396,315,279,314,363,245,208,5,4,17,101,27,38,28,104,223,213,293,472,422,433,422,431,440,564,573,458,397,339,9,3,1,2,5,105,193,356,223,265,178,173,262,311,284,352,501,640,422,386,284,335,162,288,128,6,3,7,20,97,211,125,142,220,392,285,361,454,306,346,286,175,110,103,237,38,24,50,92,6,8,3,3,89,104,214,68,203,154,276,211,194,171,202,143,79,144,89,203,286,151,65,0,3,0,9,5,80,20,78,98,110,170,98,16,8,3,1,162,155,170,158,83,112,40,42,26,5,-2,4,9,7,4,2,3,3,2,4,2,2,2,69,253,134,182,82,38,109,56,59,2,0,5,2,2,0,5,3,0,4,0,1,1,1,5,0,27,25,82,70,55,101,125,66,15,6,5,4,3,4,2,4,1,2,1,0,0,0,0,1,3,2,0,6,5,46,35,78,101,90,33,3,2,1,3,2,0,1,1,0,0,2,1,2,2,6,0,3,2,3,61,137,122,67,62,75,62,56,10,50,49,0,1,0,0,3,7,1,4,6,6,3,4,3,11,127,187,128,337,345,5,21,59,131,146,42,31,44,15,22,7,3,10,7,3,6,9,10,19,78,103,146,58,38,97,207,152,205,252,311,263,197,341,136,57,59,57,86,78,63,67,97,32,28,308,166,119,85,54,73,151,172,207,113,213,224,335,338,333,268,221,181,181,212,180,225,63,23,29,56,25,40,131,121,85,75,84,130,140,240,162,270,549,604,480,438,365,347,20,25,13,33,34,43,64,60,72,77,64,124,115,92,156,168,271,347,263,193,232,209,65,28,34,21,28,48,183,247,269,264,212,201,158,97,98,126,109,140,162,126,116,111,66,81,61,54,34,54,107,65,105,152,252,269,223,201,135,119,118,125,186,199,160,153,59,87,113,129,119,53,85,78,83,176,211,215,202,193,234,245,252,231,200,134,174,198,55,88,112,131,120,53,86,75,80,172,213,214,196,193,231,246,254,227,197,133,177,198],normalPerVertex=False,xDimension=22,xSpacing=0.023009779,zDimension=22,zSpacing=0.03516307,
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

print ("python x3d.py load successful for dardanel1-2.py")
