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
    meta(content='SavageArchiveNotAvailable.x3d',name='title'),
    meta(content='Warning message and redirection link for AUV Workbench if Savage X3D model archive not found available on local system.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='2 June 2007',name='created'),
    meta(content='4 June 2009',name='modified'),
    meta(content='http://www.web3d.org/x3d/content/examples/help.html#Savage',name='reference'),
    meta(content='https://savage.nps.edu/Savage',name='reference'),
    meta(content='https://savage.nps.edu/Savage/AuvWorkbench/OperatingAreas/SavageArchiveNotAvailable.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundColor=[(0.8,0.8,0.2)],skyColor=[(0.8,0.8,0.2)]),
    Anchor(description='click for download website',url=["https://savage.nps.edu/Savage","http://www.web3d.org/x3d/content/examples/X3dResources.html#Savage"],
      children=[
      Transform(translation=(0,2,0),
        children=[
        Shape(
          geometry=Text(string=["Savage X3D model archive not found","","Reset SavageRoot in AUVW configuration file","or click this text for Savage download page"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.5,style_='BOLD')),
          appearance=Appearance(
            material=Material(diffuseColor=(0.5,0,0.1))))]),
      Shape(DEF='ClickAssist',
        geometry=Box(size=(5,2,0.05)),
        appearance=Appearance(
          material=Material(transparency=1)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SavageArchiveNotAvailable.py")
