/*
 * This file is part of the JTRevealSidebar package.
 * (c) James Tang <mystcolor@gmail.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#import <Foundation/Foundation.h>

@protocol JTTableViewDatasourceDelegate;

@interface JTTableViewDatasource : NSObject <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, assign) id <JTTableViewDatasourceDelegate> delegate;
@property (nonatomic, retain) NSDictionary *sourceInfo;
@property (nonatomic, retain) NSArray *sections;

@end



@protocol JTTableViewDatasourceDelegate <NSObject>

- (void)datasource:(JTTableViewDatasource *)datasource
         tableView:(UITableView *)tableView
   didSelectObject:(NSObject *)object;


- (UITableViewCell *)datasource:(JTTableViewDatasource *)datasource
                      tableView:(UITableView *)tableView
                  cellForObject:(NSObject *)object;

- (void)datasourceDidExpandSection:(JTTableViewDatasource *)datasource;

@end