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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='TestFieldChecks.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='7 September 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Helps to check that X3dToVrml97 xsl translator properly diagnoses content errors with field elements.',name='description'),
    meta(content='This model does not produce a viewable scene.',name='warning'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/TestFieldChecks.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  Scene nodes are added here 
    children=[
    Script(DEF='SELF',directOutput=True,
      field=[
      field(accessType='initializeOnly',name='aa',type='SFNode',
        children=[
        Script(USE='SELF')]),
      field(accessType='initializeOnly',appinfo='using value attribute for nodes will provoke an error',name='bb',type='SFNode',
        #  initializing node goes here, comment silences warning 
        ),
      field(accessType='initializeOnly',name='cc',type='SFNode',
        children=[
        Script(USE='SELF')]
        #  ensure contained comments under Node are checked OK 
        ),
      field(accessType='inputOnly',name='dd',type='SFString'),
      field(accessType='initializeOnly',name='ee',type='SFNode',
        children=[
        WorldInfo(),]
        #  ensure contained comments under Node are checked OK 
        )])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TestFieldChecks.py")
