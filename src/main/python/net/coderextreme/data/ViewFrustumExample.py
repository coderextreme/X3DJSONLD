from x3d import *
print(
X3D(
  profile='Immersive', version='3.3', head=head(  children=[
      
          meta(name='title', content='ViewFrustumExample.x3d'),
          meta(name='description', content='Display view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, illustrating ProtoInstance reuse of a separately declared prototype.'),
          meta(name='creator', content='Don Brutzman'),
          meta(name='translated', content='16 August 2008'),
          meta(name='modified', content='20 October 2019'),
          meta(name='reference', content='ViewFrustumPrototype.x3d'),
          meta(name='drawing', content='ViewFrustumComputation.png'),
          meta(name='Image', content='ViewFrustumOverheadView.png'),
          meta(name='Image', content='ViewFrustumObliqueView.png'),
          meta(name='Image', content='ViewpointCalculator.png'),
          meta(name='Image', content='ViewpointCalculatorComposed.png'),
          meta(name='subject', content='view culling frustum'),
          meta(name='identifier', content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumExample.x3d'),
          meta(name='generator', content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit'),
          meta(name='license', content='../license.html'),
          meta(name='translated', content='16 January 2022'),
          meta(name='generator', content='X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html'),
          meta(name='reference', content='X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding')]), Scene=Scene(
    children=[
        WorldInfo(
          title='ViewFrustumExample.x3d'),
        Viewpoint(
          description='ViewFrustum from above, looking down', orientation=(1,0,0,-1.57), position=(0,40,0)),
        Viewpoint(
          description='ViewFrustum from point of view'),
        Viewpoint(
          description='ViewFrustum behind point of view', position=(0,0,15)),
        Viewpoint(
          description='ViewFrustum oblique side view', orientation=(0.8005,0.5926,0.0898,-0.3743), position=(-5,5,20)),
        NavigationInfo(
          type='"EXAMINE" "FLY" "ANY"'),
        ExternProtoDeclare(
          name='ViewFrustum', appinfo='Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes', url=['ViewFrustumPrototype.x3d#ViewFrustum'], field=[
              field(name='ViewpointNode', accessType='initializeOnly', appinfo='required: insert Viewpoint DEF or USE node for view of interest', type='SFNode'),
              field(name='NavigationInfoNode', accessType='initializeOnly', appinfo='required: insert NavigationInfo DEF or USE node of interest', type='SFNode'),
              field(name='visible', accessType='inputOutput', appinfo='whether or not frustum geometry is rendered', type='SFBool'),
              field(name='lineColor', accessType='inputOutput', appinfo='RGB color of ViewFrustum outline, default value 0.9 0.9 0.9', type='SFColor'),
              field(name='frustumColor', accessType='inputOutput', appinfo='RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8', type='SFColor'),
              field(name='transparency', accessType='inputOutput', appinfo='transparency of ViewFrustum hull geometry, default value 0.5', type='SFFloat'),
              field(name='aspectRatio', accessType='inputOutput', appinfo='assumed ratio height/width, default value 0.75', type='SFFloat'),
              field(name='trace', accessType='initializeOnly', appinfo='debug support, default false', type='SFBool')]),#Example use

        ProtoInstance(
          name='ViewFrustum', fieldValue=[
              fieldValue(name='ViewpointNode', children=[#prefer empty description to prevent entry in player's ViewpointList

                  Viewpoint(
                    description='ViewFrustum ViewpointNode')]),
              fieldValue(name='NavigationInfoNode', children=[
                  NavigationInfo(
                    visibilityLimit=15)]),
              fieldValue(name='visible', value=True),
              fieldValue(name='lineColor', value=(0.9,0.9,0.9)),
              fieldValue(name='frustumColor', value=(0.8,0.8,0.8)),
              fieldValue(name='transparency', value=0.75),
              fieldValue(name='trace', value=True)]),#Visualization assists

        Inline(
          DEF='GridXZ', url=['GridXZ_20x20Fixed.x3d']),
        Transform(
          scale=(5,5,5), children=[
              Inline(
                DEF='CoordinateAxes', url=['CoordinateAxes.x3d'])])]))
.XML())
